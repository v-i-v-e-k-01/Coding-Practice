#TWODISH
t=int(input())
for i in range(t):
    n,a,b,c=map(int,input().split())
    if b>=n:
        if a+c>=n:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
