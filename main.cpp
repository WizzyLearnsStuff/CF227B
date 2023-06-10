#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;

	long long int v = 0, p = 0;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		a[--k] = i;
	}
	
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		v += a[--b] + 1;
		p += n - a[b];
	}

	cout << v << ' ' << p;
}
