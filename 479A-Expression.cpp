#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	int f1 = a + b * c;
	int f2 = a * (b + c);
	int f3 = a * b * c;
	int f4 = (a + b) * c;
	int f5 = a + b + c;
	int f6 = a * b + c;

	int ans = max(f1, f2);
	ans = max(ans, f3);
	ans = max(ans, f4);
	ans = max(ans, f5);
	ans = max(ans, f6);

	cout << ans << endl;

	return 0;

}