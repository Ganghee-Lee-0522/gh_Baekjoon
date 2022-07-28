#include <stdio.h>
#define FALSE -1

int sum(int n)
{
  int sum = n;
  
  while(n > 0)
    {
      sum += n % 10;
      n /= 10;
    }

  return sum;
}

void selfNum(int n)
{
  int num[n];
  
  for(int i = 1; i < n; i++)
    {
      if(sum(i) < n)
        num[sum(i)] = FALSE;
    }

  for(int i = 1; i < n; i++)
    if(num[i] != FALSE)
      printf("%d\n", i);
}

int main()
{
  selfNum(10001);
  
  return 0;
}