#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FALSE 0
#define TRUE 1
  
int isHansu(int n)
{
  int d, a;
  d = (n / 10) % 10 - n % 10;

  while(n / 10 != 0)
    {
      a = n % 10;
      n /= 10;

      if(n % 10 != a + d)
        return FALSE;
    }

  return TRUE;
}

int countHansu(int n)
{
  int count = 0;
  
  for(int i = 0; i < n; i++)
    {
      if(isHansu(i + 1) == TRUE)
        count++;
    }

  return count;
}

int main()
{
  int num;
  scanf("%d", &num);

  printf("%d", countHansu(num));
  
  return 0;
}