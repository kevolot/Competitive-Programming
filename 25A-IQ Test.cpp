#include <iostream>

using namespace std;

int main() {
	int n,counter1(0), counter2(0), temp1, temp2;
	int s[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < n; i++) {
		if (s[i] % 2 == 0) {
			counter1++;
			temp1 = i;
		}
		else {
			counter2++;
			temp2 = i;
		}

	}

	if (counter1 > counter2)
		cout << temp2 + 1 << endl;
	else
		cout << temp1 + 1 << endl;

	return 0;
}