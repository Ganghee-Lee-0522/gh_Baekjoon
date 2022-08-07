#include<stdio.h>

int main()
{
	int N;

	int A;
	int B;

	scanf("%d", &N);

	int Ary[1000] = { 0, };

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &Ary[i]);
	}

	for (int k = 0; k < 1000; k++)
	{
		for (int i = 0; i < N - 1; i++)
		{
			if (Ary[i] > Ary[i + 1])
			{
				A = Ary[i];
				Ary[i] = Ary[i + 1];
				Ary[i + 1] = A;

			}
		}
	}

	for (int b = 0; b < N; b++)
	{
		printf("%d\n", Ary[b]);
	}
}