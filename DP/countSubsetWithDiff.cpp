#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int sum, int n) {
	int dp[n + 1][sum + 1];
	dp[0][0] = 1;
	for (int i = 1; i <= sum; i++)
		dp[0][i] = 0;
	for (int i = 1; i <= n; i++)
		dp[i][0] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= sum; j++)
		{
			// if the value is greater than the sum
			if (arr[i - 1] <= j)
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
			else
				dp[i][j] = dp[i - 1][j];
		}
	}

	return dp[n][sum];
}

int main() {
	int arr[] = {1, 1, 2, 3};
	int n = 4;
	int diff = 4;
	int sumArr = 0;
	for (int i = 0 ; i < n; i++) {
		sumArr += arr[i];
	}
	int s1 = (diff + sumArr) / 2;

	int ans = solve(arr, s1, n);
	cout << ans;

}