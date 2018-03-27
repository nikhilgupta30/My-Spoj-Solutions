# your code goes here
mod = 1298074214633706835075030044377087
 
t = int(input())
 
for i in range(t):
    n = int(input())
    num = 2**(n+1)
    num = num-1
    num = num%mod
    print(num); 
