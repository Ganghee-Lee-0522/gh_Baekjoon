#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Sample
{
	int Weight;
	int height;
}Sample;

int main()
{
	int N;
	scanf("%d", &N);

	int Count = 0;
	Sample* Ary = (Sample*)malloc(sizeof(Sample) * N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &(Ary[i].height), &(Ary[i].Weight));
	}
    
	for (int i = 0; i < N; i++)
	{
		Count = 0;
		for (int j = 0; j < N; j++)
		{
			if ((Ary[i].height) < (Ary[j].height))
			{
				if ((Ary[i].Weight) < (Ary[j].Weight))
				{
					Count = Count + 1;
				}	
			}
		}
		printf("%d ", Count + 1);
	}
}