#include <stdio.h>

int power(int m, int n); // function prototype

int main()

{
  int i;
  for(i = 0; i < 10; i++)
    {
      printf("%d %d %d\n", i, power(2, i), power(-4, i));
    }
  return 0;
}

// function declaration

int power(int base, int n)
{
  int i, p;
  p = 1;
  for(i = 1; i <= n; i++)
    p = p * base;
  return p;

}
