import math
rd=[int(i) for i in input().split(" ")]
r=rd[0]
d=rd[1]
n=int(input())
res=0
D=r-d
for i in range(n):
    xyri=[int(e) for e in input().split(" ")]
    x=xyri[0]
    y=xyri[1]
    ri=xyri[2]
    dist=(x*x)+(y*y)
    if(((r-d)+(ri))*((r-d)+(ri))<=dist and dist<=((r-ri)*(r-ri))) and ri<=r:
        res+=1
print(res)