#include <stdio.h>
#include <string.h>

#define N 1000000
#define TRUE 1
#define FALSE 0

int main()
{
  char str[N];
  char alpha;
  int length, count = 0, flag = FALSE;
  gets(str);


  length = strlen(str);
  
  for (int i = 0; i < length; i++)
  {
    alpha = str[i];
    
    if (alpha == ' ' && flag == TRUE)
    {
      flag = FALSE;
    }
    else if (alpha != ' ' && flag == FALSE)
    {
      count++;
      flag = TRUE;
    }
  }

  printf("%d", count);

  return 0;
}