import numpy as np

N = int(input())
A = [list(map(int, input().split())) for _ in range(N)]
B = [list(map(int, input().split())) for _ in range(N)]
a = np.array(A)
b = np.array(B)

for _ in range(4):
    a = np.rot90(a)
    flag = True
    for i in range(N):
        for j in range(N):
            if(a[i][j]==1 and b[i][j] == 0):
                flag = False
    if(flag):
        print("Yes")
        exit()
print("No")    
