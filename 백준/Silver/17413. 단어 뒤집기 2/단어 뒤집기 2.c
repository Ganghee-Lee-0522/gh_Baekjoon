#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FALSE 0
#define TRUE 1

// 스택 구조체
//(문자열을 입력할 배열, 스택에 담긴 맨 위 원소의 배열 번호)
typedef struct stack {
  char data[100000];
  int top;
} StackType;

// 스택 초기화 함수
void init(StackType *s)
{
  s->top = -1;
}

// 공백 상태 검출 함수
int isEmpty(StackType *s)
{
  if (s->top == -1)
    return 1;
  else
    return 0;
}

// 삽입 함수
void push(StackType *s, char n)
{
  s->data[++(s->top)] = n;
}

// 삭제 함수
char pop(StackType *s)
{
  return s->data[(s->top)--];
}

// 스택 출력 함수
void printStack(StackType *s)
{
  if (isEmpty(s))
    return;

  while (!isEmpty(s)) {
    printf("%c", pop(s));
  }

  return;
}

int main()
{
  int length; // 입력된 문자열의 길이
  int flag = FALSE; // 깃발을 들면(TRUE) 꺽쇠 안의 문자임
  
  StackType stack;
  init(&stack);
  char *word = (char *)malloc(sizeof(char) * 100000);

  scanf(" ");
  gets(word); // 문자열 입력 받기

  length = strlen(word); // 문자열의 길이 체크

  //문자열에 포함된 문자 갯수만큼만 처리
  for (int i = 0; i < length; i++)
  {
    if (word[i] == '<' && flag == FALSE)
    {
      if (!isEmpty(&stack))
        printStack(&stack);
      printf("%c", word[i]);
      flag = TRUE;
    }
    else if (word[i] == '>' && flag == TRUE)
    {
      printf("%c", word[i]);
      flag = FALSE;
    }
    else if (word[i] != ' ' && flag == FALSE && word[i] != '<')
    {
      push(&stack, word[i]);
    }
    else if (word[i] == ' ' && flag == FALSE)
    {
      printStack(&stack);
      printf(" ");
    }
    else if (flag == TRUE)
    {
      printf("%c", word[i]);
    }
  }

  // 스택에 남은 문자가 있다면 출력
  if (!isEmpty(&stack))
    printStack(&stack);
  printf("\n");

  return 0;
}
