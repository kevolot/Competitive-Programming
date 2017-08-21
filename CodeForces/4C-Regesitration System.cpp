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
    int n;
    cin >> n;

    map<string, int> database;
    string s;

    while(n--) {
        cin >> s;
        if (database.count(s) == 0) {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else if (database.count(s) != 0) {
            cout << s << database[s] << endl;
            database[s] += 1;
        }
    }
    return 0;
}