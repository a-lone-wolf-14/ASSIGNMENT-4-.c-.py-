num=int(input("Enter the number: "))
num2=num

if num!=0:
    for i in range (num-1,0,-1):
        num*=i

    print(f'Factorial of {num2} is: {num}')
elif num<0:
    print(f'{num} factorial not possible')
else:
    print("Factorial of 0 is: 1")