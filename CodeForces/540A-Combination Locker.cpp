#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	string a, b;
	cin >> a >> b;
	
	int sum = 0;
	int locker[1000];
	for (int i = 0; i < n; i++) {
		locker[i] = min(abs(a[i] - b[i]), (10 - abs(a[i] - b[i])));
		sum += locker[i];
	}

	cout << sum << endl;
	
	return 0;

}