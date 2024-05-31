#include <iostream>
#include <vector>
using namespace std;


int gcd(int x, int y) {
	if (x % y == 0) return y;
	else return gcd(y, x % y);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		long long sum = 0;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			v[i] = num;
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				sum = sum + gcd(v[j], v[i]);
			}
		}
		cout << sum << endl;
	}
	return 0;
}
