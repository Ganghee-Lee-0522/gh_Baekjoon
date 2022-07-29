#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FALSE 0
#define TRUE 1

typedef struct{
  int flag;
  int init;
}Alpha;

void initAlpha(char a[], int n)
{
  Alpha alpha[26];
  
  for(int i = 0; i < 26; i++)
    alpha[i].flag = FALSE;

  for(int i = 0; i < n; i++)
    {
      if(alpha[a[i] - 97].flag == FALSE)
      {
       alpha[a[i] - 97].init = i;
       alpha[a[i] - 97].flag = TRUE; 
      }
    }

  for(int i = 0; i < 26; i++)
    {
      if(alpha[i].flag == TRUE)
        printf("%d ", alpha[i].init);
      else
        printf("-1 ");
    }
}

int main(void)
{
  char str[100];
  int length;
  scanf("%s", str);

  length = strlen(str);
  
  initAlpha(str, length);
  
  return 0;
}