#include <stdio.h>

int main(void)
{
	char ar[1000000 + 1] = {1, 1, 0};
	int i, j;
	int n;
	
	for (i = 2; i * i <= 1000000; i++) {
		if (ar[i] == 1) continue;
		for (j = 2; i * j <= 1000000; j++) ar[i * j] = 1;
	}
	
	while (1) {
		scanf("%d", &n);
		if (n == 0) break;
		
		for (i = 2; i <= n / 2; i++)
			if (ar[i] == 0 && ar[n - i] == 0) break;
		
		printf("%d = %d + %d\n", n, i, n - i);
	}
	
	return 0;
}