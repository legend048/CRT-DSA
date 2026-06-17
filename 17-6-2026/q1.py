n = int(input("enter a number: "))
for i in range(1, n+1):
    print(" " * (i-1) + "*" * ((n-i)*2+1))
