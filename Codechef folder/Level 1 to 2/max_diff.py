#MAX_DIFF
t=int(input())
n=s=0
for i in range(t):
    n,s=map(int,input().split())
    if s<n:
        print(s)
    else:
        print(2*n-s)

