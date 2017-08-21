#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
	vector<int> s(4);
	for (int i = 0; i < 4; i++) {
		cin >> s[i];
	}

	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());

	cout << 4 - s.size() << endl;
	return 0;
}