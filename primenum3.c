#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, cnt = 0;
    printf("Enter a Number");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("%d is not a prime", n);
        return 0;
    }

    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            break;
        }
    }
    if (cnt == 0)
    {
        printf("Prime Number", n);
    }
    else
        printf("Not Prime Number", n);
    return 0;
}