#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;

	int ans = min(n, m);

	if (ans % 2 == 0)
	{
		cout << "Malvika" << endl;
	}
	else
	{
		cout << "Akshat" << endl;
	}

	return 0;
}