#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int n, a, b, mCount = 0, cCount = 0;
    cin >> n;

    while (n--) {
        cin >> a >> b;
        if (a > b) {
            mCount++;
        }
        else if (a < b) {
            cCount++;
        }
    }

    if (mCount > cCount) {
        cout << "Mishka" << endl;
    }
    else if (mCount == cCount) {
        cout << "Friendship is magic!^^" << endl;
    }
    else {
        cout << "Chris" << endl;
    }

    return 0;
}