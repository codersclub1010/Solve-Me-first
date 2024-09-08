def solveMeFirst(a,b):
    return a+b

num1 = int(input("Enter the first number (1 to 1000): "))
if(num1>1000):#constraints to take input 
    num1=int(input("Enter the first number Again : "))
num2 = int(input("Enter the second number (1 to 1000): "))
if(num2>1000):
    num2=int(input("Enter the second number Again : "))
res = solveMeFirst(num1,num2)
print("Addition between two number is : ",res)
