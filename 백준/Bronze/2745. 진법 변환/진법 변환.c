#include<stdio.h>
#include<stdlib.h>

int main()
{
	int B;
    char N[99];
	scanf("%s %d",N,&B);
    
	printf("%d",(int)strtol(N,NULL,B));
    
	return 0;
}