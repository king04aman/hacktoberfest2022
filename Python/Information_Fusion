def XOR(x, y):
    return '1' if x != y else '0'

def _fusion(array):
    for i in range(len(array) - 1):
        information_fusion = []
        for j in range(len(array[0])):
            information_fusion += [XOR(array[i][j], array[i + 1][j]) if i == 0 else XOR(information_fusion[0][j], array[i + 1][j])]
    return ''.join(information_fusion).split()
