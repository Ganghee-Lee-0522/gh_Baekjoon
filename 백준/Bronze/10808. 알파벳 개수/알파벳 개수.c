#include <stdio.h>
#include <string.h>

int main()
{
    char S[100];
    int alpha[26] = { 0 };
    
    scanf("%s", S);
    
    for (int i = 0; i < strlen(S); i++)
        alpha[S[i] - 'a']++;
        
    for (int i=0; i < 26; i++)
        printf("%d ", alpha[i]);
        
    return 0;
}