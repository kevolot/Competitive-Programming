#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int count = 0;
	string s;
	getline(cin, s);

	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());

	for (int i = 0; i < s.length(); i++) {
		if (s[i] <= 122 && s[i] >= 97) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}