#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	for (int i = 0; i < n; i++) {
		if (s[i] >= 97) {
			s[i] = s[i] - 32;
		}
	}

	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());

	if (s.length() == 26) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}