#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n, max, min, location1 = 0, location2 = 0;
	cin >> n;
	
	int line[100];
	for (int i = 0; i < n; i++)
	{
		cin >> line[i];
	}

	for (int i = 0; i < n; i++)
	{
		max = line[0];
		if (line[i] > max)
		{
			max = line[i];
			location1 = i;
		}
	}

	for (int i = n-1; i != 0; i--)
	{
		min = line[n-1];
		if (line[i] < min)
		{
			min = line[i];
			location2 = i;
		}
	}

	cout << location1 + (n - location2 - 1) - (location1 > location2 ? 1 : 0) << endl;
	return 0;
}