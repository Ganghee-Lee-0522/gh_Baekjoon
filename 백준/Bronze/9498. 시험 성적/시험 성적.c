#include <stdio.h>
#include <stdlib.h>
//시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 
int main()
{
    int score;
    scanf("%d", &score);
    
    switch(score/10) {
        case 10 :
        case 9 :
            printf("A");
            break;
        case 8 :
            printf("B");
            break;
        case 7 :
            printf("C");
            break;
        case 6 :
            printf("D");
            break;
        default :
            printf("F");
    }

    return 0;
}
