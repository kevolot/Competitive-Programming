#include <iostream>

using namespace std;

int main()
{
	int x, moves = 0;
	cin >> x;

	moves = x / 5 + (x % 5 ? 1 : 0);
	cout << moves << endl;
	return 0;
}