#include<stdio.h>

void factorial();

void main()
{
    factorial();
}

void factorial(int num)
{
    printf("Enter the number: ");
    scanf("%i",&num);

    for (int n=num-1; n>0; n--)
    {
        num*=n;      
    }
    printf("%i",num);
}

