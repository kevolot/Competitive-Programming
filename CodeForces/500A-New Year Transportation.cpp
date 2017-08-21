#include <iostream>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;

	int cells[30000];
	for (int i = 0; i < n - 1; i++) {
		cin >> cells[i];
	}

	int routin[30000];
	routin[0] = 1;
	for (int i = 1; i < n - 1; i++) {
		routin[i] = routin[i - 1] + cells[i - 1];
	}

	for (int i = 0; i < n; i++)
	{
		if (routin[i] == t) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}