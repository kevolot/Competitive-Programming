#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s.begin(), s.end());

	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}

	return 0;
}
