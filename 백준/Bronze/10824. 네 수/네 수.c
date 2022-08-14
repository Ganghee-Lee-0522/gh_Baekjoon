#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char A[1000000];
    char B[1000000];
    char C[1000000];
    char D[1000000];
    
    scanf("%s %s %s %s", A, B, C, D);
    
    strcat(A, B);
    strcat(C, D);
    
    long long AB = atoll(A);
    long long CD = atoll(C);
    
    printf("%lld", AB + CD);
    return 0;
}