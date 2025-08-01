#include<stdio.h>
int main()
{
    int sum=0,a[100],i,n;
    printf("Enter a N:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    sum+=a[i];
    printf("sum is %d",sum);
    return 0;
}