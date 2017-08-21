#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	int products = 1;
	while (i <= n) {
		products *= i;
		i++;
	}
	cout << products + 1 << endl;
	return 0;
}