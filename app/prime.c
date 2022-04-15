#include <stdio.h>

int main()
{
  int n, i, x = 0;
  printf("Enter a number : ");
  scanf("%d", &n);
  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      x++;
      break;
    }
  }
  if (x == 0)
    printf("%d is a Prime Number.", n);
  else
    printf("%d is not a Prime Number.", n);
}
