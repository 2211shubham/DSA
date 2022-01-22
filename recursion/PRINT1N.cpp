#include <bits/stdc++.h>
using namespace std;

void print(int num) {
	if (num == 1) {
		cout << num << " ";
		return;
	}

	print(num - 1);
	cout << num << " ";
}

int main() {
	print(7);
	return 0;
}