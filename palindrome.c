#include <stdio.h>
int main()
{
  int rem, rev = 0, n, temp;
  printf("Enter a number");
  scanf("%d", &n);

  while (n > 0)
  {
    int rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }
  
  if (temp == rev)
    printf("Nuber is palindrome");

  else
  {
    printf("Number is not palindrome");
  }
  return 0;
}
