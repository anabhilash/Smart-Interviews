#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findMissing() {
	int t = 0, n = 0, i = 0, num = 0;
	cin >> t;

	while (t--) {
		cin >> n;
		int sum = 0;
		for (i = 0; i < n; i++) {
			cin >> num;
			sum += num;
		}
		n = n + 1;
		cout << (((n * (n + 1)) / 2) - sum);
	}
	return 0;
}
