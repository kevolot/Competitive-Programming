#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n;
	string wins;
	cin >> n >> wins;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (wins[i] == 'A') {
			count++;
		}
	}
	if (count > (n / 2)) {
		cout << "Anton" << endl;
	}
	else if ((count == (n / 2)) && (n % 2 == 0)) {
		cout << "Friendship" << endl;
	}
	else {
		cout << "Danik" << endl;
	}
	return 0;
}