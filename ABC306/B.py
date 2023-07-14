A = list(map(int, input().split()))
ans = 0
for i in range(64):
    if(A[i]==1):
        ans += pow(2,i);
print(ans)        
