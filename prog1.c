#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%i", &n);

    int fib=0;
    printf("%i \n", fib);
    int fib2=1;
    printf("%i \n", fib2);

    int sum;

    for (int j=0; j<=n-3; j++)
    {
        sum=fib+fib2;
        printf("%i \n",sum);
        fib=fib2;
        fib2=sum;
    }
    return 0;
}