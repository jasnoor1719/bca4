i=1
j=1
while i<=5:
    print(i)
    i=i+1


n = int(input("Enter number of terms: "))

a = 0
b = 1

print("Fibonacci Series:")

for i in range(n):
    print(a)
    c = a + b
    a = b
    b = c
   