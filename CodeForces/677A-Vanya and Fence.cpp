#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int height[1000];
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> height[i];
		if (height[i] > m) {
			count++;
		}
	}
	int length = n + count;
	cout << length << endl;
	return 0;
}