#include <stdio.h>
#include <stdlib.h>
long long dp[1000000];
long long dynamic(int x)
{
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int a = 4; a <= 1000000; a++)
    {
        dp[a] = (dp[a - 1] + dp[a - 2] + dp[a - 3]) % 1000000009;
    }
    return dp[x];
 
}
int main() {
    int nums;
    scanf("%d", &nums);
    for (int a = 0; a < nums; a++)
    {
        int number;
        scanf("%d", &number);
        long long result = dynamic(number);
        printf("%d\n", result);
    }
    return 0;
}
 