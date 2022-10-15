# GitHub username: Maharshi-Pandya
# Program to find modular multiplicative inverse of an integer

from math import gcd

def modinv(a, n):
    t, newt = 0, 1
    r, newr = n, a

    while newr != 0:
        quo = r // newr
        t, newt = newt, t - quo * newt
        r, newr = newr, r - quo * newr

    if t < 0:
        t += n

    return t

if __name__ == "__main__":
    
    a = int(input("\nInput the integer whose modular inverse you wanna find: "))
    n = int(input("Input the modulo number: "))
    
    if gcd(a, n) != 1:
        print(f"\n❌ Modular inverse does not exist! {a} and {n} are not co-prime.")
        exit(1)
    
    print(f"\n✅ Modular Inverse of {a} w.r.t {n} is:", modinv(a, n))