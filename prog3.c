#include<stdio.h>

void gcd();

void main()
{
    gcd();
}

void gcd(int a,int b,int r)
{
    printf("Enter the value of a: ");
    scanf("%i",&a);
    printf("Enter the value of b: ");
    scanf("%i",&b);

    if (a>b)
    {
        while (r>=0)
        {
            r=a%b;
            if (r==0)
            {
                printf("The gcd of (a,b) is: %i",b);
            }
            a=b;
            b=r;

            
        }
    }
    else if (b>a)
    {
        while(r>=0)
        {
            r=b%a;
            if (r==0)
            {
                printf("The gcd of (a,b) is: %i",a);
            }
            b=a;
            a=r;
        }
    }
    else
    {
        printf("The gcd of (a,b) is: %i",a);
    }
}