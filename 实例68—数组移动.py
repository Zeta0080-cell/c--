a=[1,2,3,4,5]
b=[0,0,0,0,0]
m=int(input("m:"))
t=0
for i in range(m,len(b)):
    b[i]=a[t]
    t+=1
for i in range(len(b)-t):
    b[i]=a[t]
    t+=1
print(b)