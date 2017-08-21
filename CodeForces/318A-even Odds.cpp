#include <iostream>

using namespace std;

int main()
{
	long long n, m, temp1, temp2;
	cin >> n >> m;

	temp1 = 2 * m - 1;
	temp2 = (m - (n + 1) / 2) * 2;
	if (m <= (n+1) / 2)
	{
		cout << temp1 << endl;
	}
	else
	{
		cout << temp2 << endl;
	}

	return 0;
}