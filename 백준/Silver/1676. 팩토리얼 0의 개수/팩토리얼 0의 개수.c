#include <stdio.h>

int main()
{
	int N;
	int m_5 = 0;	// 5의 배수
	int m_25 = 0;	// 25의 배수
	int m_125 = 0;	// 125의 배수

	scanf("%d", &N);

	m_5 = N / 5;
	m_25 = N / 25;
	m_125 = N / 125;

	printf("%d", m_5 + m_25 + m_125);

	return 0;
}