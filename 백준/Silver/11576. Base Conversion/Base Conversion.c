#include <stdio.h>

int main()
{
	int A, B, m, tmp, arr[25];
    	int N = 0, idx = 0;
	
	scanf("%d %d %d", &A, &B, &m);
	
	for(int i = 0; i < m; i++){
		scanf("%d", &tmp);
		N=(N*A)+tmp;
	}
	
	while(N){
		arr[idx++] = N % B;
		N /= B;
	}
	for(int i = idx - 1; i >= 0; i--){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
