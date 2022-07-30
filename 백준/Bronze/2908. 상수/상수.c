#include <stdio.h>

void printAns(int num)
{
  for(int i = 0; i < 3; i++)
    {
      printf("%d", num % 10);
      num /= 10;
    }
  return;
}
  
int main()
{
  int A, B, tempA, tempB;
  scanf("%d %d", &A, &B);
  tempA = A; tempB = B;

  for(int i = 0; i < 3; i++)
    {      
      if(tempA % 10 == tempB % 10)
      {
        tempA /= 10; tempB /= 10;
      }
      else if(tempA % 10 > tempB % 10)
      {
        printAns(A);
        break;
      }
      else
      {
        printAns(B);
        break;
      }
    }
  
  return 0;
}