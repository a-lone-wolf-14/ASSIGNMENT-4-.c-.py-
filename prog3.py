a=int(input("Enter the value of 'a': "))
b=int(input("Enter the value of 'b': "))

rem=1

while rem!=0:
    rem=a%b
    if rem==0:
        print(f'The GCD/HCF (a,b) = {b}')
        break
    a=b
    b=rem