#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	int max = 1;
	int matrix[10][10];
	for (int i = 0; i < n; i++) {
		matrix[0][i] = 1;
	}

	for (int i = 0; i < n; i++) {
		matrix[i][0] = 1;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
		}
	}
	cout << max << endl;

	return 0;
}