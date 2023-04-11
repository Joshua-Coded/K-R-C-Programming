#include <stdio.h>
#define MAXLINE 1000 // MAXIMUM INPUT LINE SIZE


// prototypes for all our functionS

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input lines

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  while ((len = getLine(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }

  if (max  > 0)
    printf("%s", longest);
  return 0;
}


// getline: read a line into s, return lenght

int getLine(char s[], int lim)
{
  int c, i;

  for(i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;

  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

// copy from into to;

void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\n')
    ++i;
}
