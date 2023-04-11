#include <stdio.h>

/* copy input to output; version 1 */

int main()
{
  int c;
  c = getchar();
  while (c != EOF)
    {
      putchar(c);
      c = getchar();
    }

}
