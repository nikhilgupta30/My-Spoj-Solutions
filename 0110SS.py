 
n = int(input())
 
a=1
b=1
c=0
d=0
 
for i in range(1,n):
    c = b
    d = a+b
    a = c
    b = d
    
print(a+b) 
