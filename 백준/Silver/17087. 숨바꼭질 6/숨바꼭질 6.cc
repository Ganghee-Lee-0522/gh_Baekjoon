#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

int N, S, x, ans;
int A[100001];

int solve(int a, int b)
{
	if (b == 0) return a;
	else return solve(b, a % b);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> S;

	for (int i = 0; i < N; i++)
	{
		cin >> x;
		x = abs(S - x);
		A[i] = x;
	}

	ans = A[0];
	for (int i = 1; i < N; i++)
	{
		ans = solve(ans, A[i]);
	}

	cout << ans;
}