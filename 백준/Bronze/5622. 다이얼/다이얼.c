#include <stdio.h>
#include <string.h>

int main()
{
  char alpha[15];
  char temp;
  int count = 0, length;
  scanf("%s", alpha);
  length = strlen(alpha);

  for(int i = 0; i < length; i++)
    {
      temp = alpha[i];
      count++;
      switch(temp)
        {
          case 'A' :
          case 'B' :
          case 'C' :
            count += 2;
            break;
          case 'D' :
          case 'E' :
          case 'F' :
            count += 3;
            break;
          case 'G' :
          case 'H' :
          case 'I' :
            count += 4;
            break;
          case 'J' :
          case 'K' :
          case 'L' :
            count += 5;
            break;
          case 'M' :
          case 'N' :
          case 'O' :
            count += 6;
            break;
          case 'P' :
          case 'Q' :
          case 'R' :
          case 'S' :
            count += 7;
            break;
          case 'T' :
          case 'U' :
          case 'V' :
            count += 8;
            break;
          case 'W' :
          case 'X' :
          case 'Y' :
          case 'Z' :
            count += 9;
            break;
        }
    }
  printf("%d", count);
  return 0;
}