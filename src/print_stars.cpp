#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int i = 0, j = 0, n = 0, num = 0, k;
	cin >> num;
	for (k = 0; k < num; k++) {
		cin >> n;
		cout<<"Case #"<<k+1<<':'<<'\n';
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if(i>n-j){
					cout<<'*';
				}else{
					cout<<' ';
				}
			}
			cout<<'\n';
		}
	}

	return 0;
}
