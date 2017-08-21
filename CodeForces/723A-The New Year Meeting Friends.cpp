#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int position[3];
	for (int i = 0; i < 3; i++) {
		cin >> position[i];
	}

	sort(position, position + 3);
	int minDistance = position[0] + position[1] + position[2];
	for (int i = position[0]; i < position[2]; i++) {
		int distance = abs(position[0] - i) + abs(position[1] - i) + abs(position[2] - i);
		if (distance < minDistance) {
			minDistance = distance;
		}
	}
	cout << minDistance << endl;
}