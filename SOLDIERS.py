# your code goes here
 
t = int(input())
 
for _ in range(t):
    s = input()
    m,n = map(int,s.split())
    print(int(max(m * (int(n / 2) + n % 2), n * (int(m / 2) + m % 2)))) 
