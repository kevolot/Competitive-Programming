#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int count = 0;
	while (((1 + count) * count / 2) * 5 + b <= 240) {
		count++;
	}
	int realcount = count - 1;
	if (count > a) {
		realcount= a;
	}
	else if (count - 1 < 0) {
		realcount = 0;
	}
	cout << realcount << endl;
	return 0;
}