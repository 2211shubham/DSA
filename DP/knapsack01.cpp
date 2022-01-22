#include <bits/stdc++.h>
using namespace std;

int static t[102][102];

int knapsack(int wt[], int val[], int w, int n) {
	if (n == 0 || w == 0) {
		return 0;
	}
	if (t[n][w] != -1) {
		return t[n][w];
	}
	if (wt[n - 1] <= w) {
		return t[n][w] = max(val[n - 1] + knapsack(wt, val, w - val[n - 1], n - 1), knapsack(wt, val, w, n - 1));
	} else if (wt[n - 1] > w) {
		return t[n][w] = knapsack(wt, val, w, n - 1);
	}
}

int main() {


}