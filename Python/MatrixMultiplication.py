A = [[1, 2, 3],
	[7, 8, 9],
	[4, 5, 6]]

B = [[15, 18, 31, 2],
	[12, 7, 23, 0],
	[24, 15, 9, 1]]
	
result = [[0, 0, 0, 0],
		[0, 0, 0, 0],
		[0, 0, 0, 0]]

for i in range(len(A)):

	for j in range(len(B[0])):

		for k in range(len(B)):
			result[i][j] += A[i][k] * B[k][j]

for res in result:
	print(res)
