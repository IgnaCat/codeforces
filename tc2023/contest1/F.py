import math
nRr = [float(i) for i in input().split(" ")]
n=nRr[0]
R=nRr[1]
r=nRr[2]
res = n*R*r*math.sin(2*math.pi/(2*n))
print(res)