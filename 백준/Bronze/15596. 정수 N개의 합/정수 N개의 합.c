long long sum(int *a, int n) {
	long long ans = 0;
    
    for(long long i = 0; i < n; i++)
        ans += a[i];
    
	return ans;
}
