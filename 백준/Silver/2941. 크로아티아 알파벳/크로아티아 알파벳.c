#include <stdio.h>

int main()
{
  char str[100];
  int i = 0, count = 0;
  scanf("%s", str);

  while(str[i] != '\0')
    {
      if(str[i] == 's' || str[i] == 'z')
      {
        if(str[i + 1] == '=')
          i++;
      }
      else if(str[i] == 'c')
      {
        if(str[i + 1] == '=' || str[i + 1] == '-')
          i++; 
      }
      else if(str[i] == 'd')
      {
        if(str[i + 1] == 'z' && str[i + 2] == '=')
          i += 2;
        else if(str[i + 1] == '-')
          i++;
      }
      else if(str[i] == 'l' && str[i + 1] == 'j')
        i++;
      else if(str[i] == 'n' && str[i + 1] == 'j')
        i++;

      count++;
      i++;
    }

  printf("%d", count);

  return 0;
}