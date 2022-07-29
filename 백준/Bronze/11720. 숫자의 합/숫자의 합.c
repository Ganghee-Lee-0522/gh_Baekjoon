#include <stdio.h>

int sumNum(int n, char* s)
{
  int count = 0, temp;
  
  for(int i = 0; i < n; i++)
    {
      temp = *(s + i) - '0';      
      count += temp;
    }

  return count;
}

int main()
{
  int n;
  scanf("%d", &n);

  char* num = (char*)malloc(n * sizeof(char));
  scanf("%s", num);

  printf("%d", sumNum(n, num));

  return 0;
}