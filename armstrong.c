#include<stdio.h>
#include<math.h>
int main()
{
    int cnt=0,num,rem,temp;
    float result=0;
    printf("Enter a number");
    scanf("%d",&num);
    temp=num;

    
    while(num>0)
    {
        cnt++;
        num=num/10;
    }
    num=temp;

    while(num>0)
    {
     rem=num%10;
     result=result+pow(rem,cnt);
     num=num/10;  

     
    }

     if (result==temp){
        printf("Number is Armstrong");

    }

    else{
        printf("Number is not Armstrong");
    }
    return 0;
}