#include <stdio.h>
#include <stdlib.h>

int findMax(int list[], int N)
{
    int max = list[0];
    
    for(int i = 0; i < N; i++)
        if(max < list[i])
            max = list[i];
            
    return max;
}

double findAvr(int list[], int N, int M)
{
    double avr = 0.0;
    
    for(int i = 0; i < N; i++)
    {
        avr += list[i];
    }
    avr /= N;
    
    return (avr / M * 100);
}

int main()
{
    int N;
    scanf("%d", &N);
    int score[N];
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &score[i]);
    }
    
    printf("%lf", findAvr(score, N, findMax(score, N)));
}



