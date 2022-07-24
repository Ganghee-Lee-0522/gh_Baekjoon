#include <stdio.h>
#include <stdlib.h>
#define N 80

int countScore(char list[])
{
    int i = 0;
    int cScore = 0;
    int scr[N] = {0};
    
    while(list[i])
    {
        if(list[i] == 'O')
        {
            if(i == 0 || list[i] != list[i - 1])
                scr[i] = 1;
            else
                scr[i] = scr[i - 1] + 1;           
        }
        
        cScore += scr[i];
        i++;
    }
    
    return cScore;
    
    
}

int main()
{
    int num;
    char score[N];
    scanf("%d", &num);
    int scoreBoard[num];
    
    for(int i = 0; i < num; i++)
    {
        scanf("%s", score);
        scoreBoard[i] = countScore(score);
    }
    
    for(int i = 0; i < num; i++)
        printf("%d\n", scoreBoard[i]);
}