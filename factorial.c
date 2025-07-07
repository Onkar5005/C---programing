#include<stdio.h>
int main()
{
    int fact =1,i,n;


    printf("Enter the number:");
    scanf("%d",&n);
    i=2;


    while(i<=n)
    {

        fact=fact*i;
        i++;
    }



    printf("Factorial of %d is %d",n,fact);
    return 0;
}