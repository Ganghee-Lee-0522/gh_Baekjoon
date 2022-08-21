#include <stdio.h>

int abs(int a)
{
	if(a < 0)
	{
		return -a;
	}
	return a;
}

int getGCD(int a, int b)
{
	if(b > a)
	{
		return getGCD(b, a);
	}
	else if(b == 0)
	{
		return a;
	}
	else
	{
		return getGCD(b, a % b);
	}
}

int main()
{
	int n, s, a, gcd, i;

	scanf("%d %d %d", &n, &s, &a);
	
	gcd = abs(s - a);
	for(i=1;i<n;i++)
	{
		scanf("%d", &a);
		
		gcd = getGCD(gcd, abs(s - a));
	}

	printf("%d\n", gcd);

	return 0;
}
