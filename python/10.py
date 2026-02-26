num=int(input("enter any number"))
count =0
sum= 0
while num!=0:
 sum +=num%10
 count=count+1 
 num= num//10  
print("count of values is",count)  
print("sum of values is ",  sum) 

num = int(input("Enter a number: "))

reverse = 0

while num > 0:
    digit = num % 10
    reverse = reverse * 10 + digit
    num = num // 10

print("Reversed number =", reverse)
