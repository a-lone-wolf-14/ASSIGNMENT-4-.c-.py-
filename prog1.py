f1=0
f2=1

number=int(input("Enter the number of terms of the Fibonacci Series you want to show: "))

print(f1)
print(f2)

for i in range (0,number-2):
	fsum=f1+f2
	print(fsum)
	f1=f2
	f2=fsum
	i+=1