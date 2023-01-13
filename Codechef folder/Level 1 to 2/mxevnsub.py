#MXEVNSUB
t=int(input())
sum=0
for i in range(t):
    n=int(input())
    sum=n*(n+1)/2
    if(sum%2==0):
        print(n)
    else:
        print(n-1)