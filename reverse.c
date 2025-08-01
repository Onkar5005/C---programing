#include<stdio.h>
int main()
{
    int rem,rev=0,n;
printf("Enter a number");
scanf("%d",&n);
  
 while(n>0)
 {
    int rem=n%10;
    rev=rev*10+rem;
    n/=10;
 }

 printf("Reverse Number is %d",rev);
 return 0;
}







