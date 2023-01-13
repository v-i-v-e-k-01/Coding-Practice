#SMOL
t=int(input())
n=k=0
for i in range(t):
    n,k=map(int,input().split())
    if n>=k & k!=0:
        print(n%k)
    else:
        print(n)