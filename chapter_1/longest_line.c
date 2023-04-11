#include <stdio.h>
#define MAXLINE 1000 // Maximum input line size



// prototypes for all our functionS


// Function prototypes

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

// Main function
int main()
{
  int len, max;
  char line[MAXLINE], longest[MAXLINE];

  max = 0;

  while ((len = getLine(line, MAXLINE)) > 0)

    if (len > max) {

  {
    if (len > max) 
    {

      max = len;
      copy(longest, line);
    }
  }

  if (max > 0)
  {
    printf("%s", longest);
  }

  return 0;
}



// getline: read a line into s, return lenght


// Function to read a line into s and return length
>>>>>>> refs/remotes/origin/main
int getLine(char s[], int lim)
{
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
  {
    s[i] = c;
  }

  if (c == '\n') 
  {
    s[i] = c;
    i++;
  }

  s[i] = '\0';

  return i;
}

// Function to copy from into to
void copy(char to[], char from[])
{
  int i;

  for (i = 0; from[i] != '\0'; i++)
  {
    to[i] = from[i];
  }

  to[i] = '\0';
}
