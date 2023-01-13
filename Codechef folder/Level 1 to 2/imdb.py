#IMDB
t=int(input())
maxr=0
lt=[]
while t:
    n,x=map(int,input().split())
    i=0
    for i in range (0,n):
        lt.append(input().split())
    i=0
    while i<n:
            if int(lt[i][0])<=x:
                if maxr<int(lt[i][1]):
                    maxr=int(lt[i][1])
            i=i+1
    print(maxr,end="\n")
    maxr=0
    lt=[]
    t=t-1

