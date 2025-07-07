#include<stdio.h>
int main()
{
    int result =1,i,x,y;
    printf("Enter the value of Number:");
    scanf("%d",&x);
    printf("Enter the value of power:");
    scanf("%d",&y);

    i=1;
    while (i<=y){
        result=result*x;
        i++;
    }
    printf("%d^%d=%d",x,y,result);
    return 0;

    
}