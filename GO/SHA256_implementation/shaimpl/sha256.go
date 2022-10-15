// * Note: All the variables are 32 bit unsigned ints and addition calculated is modulo 2^32

package shaimpl

import (
	"bytes"
	"fmt"
	"math"
)

type Sha256 struct {
	Digest [32]byte
}

// converts the uint32 ints to byte array
func ToBytes(hash [8]uint32) [32]byte {
	var h [32]byte

	for i, v := range hash {
		h[4*i] = byte(v >> 24)
		h[4*i+1] = byte(v >> 16)
		h[4*i+2] = byte(v >> 8)
		h[4*i+3] = byte(v >> 0)
	}

	return h
}

// converts the byte array to hex string
func ToHexString(hash [32]byte) string {
	digestStr := "0x"

	if len(hash) != 0 {
		for _, v := range hash {
			hStr := ""
			if v <= 15 {
				hStr += "0"
			}
			hStr += fmt.Sprintf("%x", v)
			digestStr += hStr
		}
	}

	return digestStr
}

// compute
func (sha256 *Sha256) Hash(usrMsg string) [32]byte {
	// First 32 bits of the fractional parts of the square roots of
	// first 8 prime numbers i.e. 2..19
	H := [8]uint32{
		0x6a09e667,
		0xbb67ae85,
		0x3c6ef372,
		0xa54ff53a,
		0x510e527f,
		0x9b05688c,
		0x1f83d9ab,
		0x5be0cd19,
	}

	// first 32 bits of the fractional parts of the cube roots of the
	// first 64 prime numbers i.e. 2..311
	K := [64]uint32{
		0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
		0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3, 0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
		0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
		0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
		0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13, 0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
		0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
		0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
		0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208, 0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2,
	}

	// * Pre-processing
	// Begin with the original message of length L bytes
	// Append a single byte (0x80) to append '1'
	// Make an array of N blocks having 16 32-bit integers

	msg := []byte(usrMsg)
	msg = bytes.Join([][]byte{msg, {0x80}}, []byte{}) // appends '1'

	// N is the number of 512-bits (64 bytes) blocks
	l := float64(len(msg)) / float64(64)
	N := uint32(math.Ceil(l))

	// M is the message array N x 16 size
	M := make([][]uint32, N)
	for i := range M {
		M[i] = make([]uint32, 16)
	}

	// populate the Message array
	for i := range M {
		for j := 0; j < 16; j++ {
			// we encode 4 chars per integer (64 per block)
			index := i*64 + j*4

			// we build the ints in message array using appropriate
			// left shifting of 4 chars from msg
			for k := 0; k < 4; k++ {
				if index+k < len(msg) {
					M[i][j] |= (uint32(msg[index+k]) << uint32(8*(3-k)))
				}
			}
		}
	}

	// last 64 bits should be the length of msg (in bits) in uint64
	// in principle left shifting by 32 will be second last element of M
	// and & operation on msg bits will be last element of M
	M[N-1][14] = uint32(uint64((len(msg)-1)*8) >> 32)
	M[N-1][15] = uint32((len(msg) - 1) * 8 & 0xFFFFFFFF)

	// * Hashing starts...
	for i := range M {
		// message schedule array
		w := make([]uint32, 64)

		// copy the first 16 words into w the Message Array
		for t := 0; t < 16; t++ {
			w[t] = M[i][t]
		}

		// Now we extend the first 16 words into remaining 48 words in
		// the message schedule array
		for k := 16; k < 64; k++ {
			s0 := RoR(w[k-15], 7) ^ RoR(w[k-15], 18) ^ uint32(w[k-15]>>3)
			s1 := RoR(w[k-2], 17) ^ RoR(w[k-2], 19) ^ uint32(w[k-2]>>10)
			w[k] = w[k-16] + s0 + w[k-7] + s1
		}

		// Init the working variables a..h to current hash value
		a, b, c, d := H[0], H[1], H[2], H[3]
		e, f, g, h := H[4], H[5], H[6], H[7]

		// * Compression function main loop starts...
		// addition modulo 2**32
		for j := 0; j < 64; j++ {
			temp1 := h + Sum1(e) + Ch(e, f, g) + K[j] + w[j]
			temp2 := Sum0(a) + Maj(a, b, c)

			// swap or rotate the working variables
			h = g
			g = f
			f = e
			e = RoR(d+temp1, 0)
			d = c
			c = b
			b = a
			a = RoR(temp1+temp2, 0)
		}

		// * Add the compressed chunk to the hash value
		H[0] = RoR((H[0] + a), 0)
		H[1] = RoR((H[1] + b), 0)
		H[2] = RoR((H[2] + c), 0)
		H[3] = RoR((H[3] + d), 0) // RoR by 0 will be addition modulo 2**32
		H[4] = RoR((H[4] + e), 0)
		H[5] = RoR((H[5] + f), 0)
		H[6] = RoR((H[6] + g), 0)
		H[7] = RoR((H[7] + h), 0)

	}

	// append to digest
	hash := [8]uint32{H[0], H[1], H[2], H[3], H[4], H[5], H[6], H[7]}

	sha256.Digest = ToBytes(hash)
	return sha256.Digest
}

// Right rotate bitwise operation
func RoR(n uint32, off uint8) uint32 {
	return uint32((n >> off) | (n << (32 - off)))
}

// S1 calc
func Sum1(e uint32) uint32 {
	return uint32(RoR(e, 6) ^ RoR(e, 11) ^ RoR(e, 25))
}

// Choice calc
func Ch(e, f, g uint32) uint32 {
	return ((e & f) ^ (^e & g))
}

// S0 calc
func Sum0(a uint32) uint32 {
	return (RoR(a, 2) ^ RoR(a, 13) ^ RoR(a, 22))
}

// Majority calc
func Maj(a, b, c uint32) uint32 {
	return ((a & b) ^ (a & c) ^ (b & c))
}
