#include<stdio.h>

int main()
{
	//에라토스테네스의 체
	int ar[1000001] ;
	for (int i = 2; i < 1000001; i++)
		ar[i] = i;   //배열[i]에 i 대입
    
	for (int i = 2; i <= 1000001; i++)
		for (int j = 2; j * i <= 1000001; j++)
			ar[i * j] = 0; 
            //에라토스테네스의 체로 소수가 아닌 숫자들은 0을 넣는다.

	int ntest;
	scanf("%d", &ntest);
	for (int i = 0; i < ntest; i++) {
		int a;
		int answer = 0;
		scanf("%d", &a);
		for (int i = 2; i < a; i++) {
			if (ar[a - i] + ar[i] == a) {
				answer++;
				if (a - i == i) //10에서 5+5인경우
					answer++;
			}
			
		}
		printf("%d\n", answer / 2);
	}
}