#include <iostream>

using namespace std;
const int MAXN = 100005;
int s[MAXN];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	int count = 1;
	int maxcount = 0;

	for (int i = 0; i < n; i++)
	{
		if (s[i+1] >= s[i])
		{
			count++;

		}
		else
		{
			maxcount = maxcount>count ? maxcount : count;
			count = 1;
		}
	}

	cout << maxcount << endl;

	return 0;
}