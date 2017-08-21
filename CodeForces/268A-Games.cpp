#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n,count = 0;
	int pairs[60];
	cin >> n;
	for (int i = 0; i < 2 * n; i++)
	{
		cin >> pairs[i];
	}

	for (int i = 0; i < 2 * n - 1; i += 2) {
		for (int j = 1; j < 2 * n; j += 2) {
			if (pairs[i] == pairs[j]) {
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}