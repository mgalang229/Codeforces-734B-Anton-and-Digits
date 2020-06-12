#include <bits/stdc++.h>

using namespace std;

void decode() {
	int k2, k3, k5, k6;
	cin >> k2 >> k3 >> k5 >> k6;
	int n256 = min(k2, min(k5, k6));
	int n32 = min(k3, k2 - n256);
	cout << 32 * n32 + 256 * n256 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
