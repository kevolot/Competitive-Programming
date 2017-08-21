#include <iostream>

using namespace std;

int main() {
	int n, sum = 1;
	int magnets[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> magnets[i];
	}
	for (int i = 0; i < n - 1; i++) {
		if (magnets[i] != magnets[i + 1]) {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}