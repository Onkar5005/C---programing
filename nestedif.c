#include<stdio.h>
int main()
{
    int h,m,s;
    printf("Enter Hours");
    scanf("%d",&h);

    printf("Enter minutes");
    scanf("%d",&m);

    printf("Enter second");
    scanf("%d",&s);


    if(h>=0 && h<24)
    {
        if(m>=0 && m<60)
        {
            if(s>=0 && s<60)
            printf("Time is Valid");

            else
            printf("seconds are invalid");

        }
        else
        printf("minutes are invalid");

    }
    else
    printf("Hours are invalid");


    return 0;
}
