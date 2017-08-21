#include <iostream>

using namespace std;

int main()
{
	int n, m, ans = 0;
	cin >> n >> m;

	while (n > 0)
	{
		ans++;
		n--;
		if (ans % m == 0)
		{
			n++;
		}
	}
	cout << ans << endl;
	return 0;
}