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
    int cup[3];
    int medal[3];
    int shelves;
    int cups = 0;
    int medals = 0;
    int a = 0, b = 0;
    for (int i = 0; i < 3; i++) {
        cin >> cup[i];
        cups += cup[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> medal[i];
        medals += medal[i];
    }
    cin >> shelves;

    if (cups == 0) {
        a = 0;
    }
     else if (cups >= 5 && cups % 5 == 0) {
            a = cups / 5;
        }
        else {
            a = cups / 5 + 1;
        }
    if (medals == 0) {
        b = 0;
    }
   else if (medals >= 10 && medals % 10 == 0) {
        b = medals / 10;
    }
    else {
        b = medals / 10 + 1;
    }

    if (shelves >= a + b) {
        cout << "YES" << endl;
    }
    else if (shelves < a + b){
        cout << "NO" << endl;
    }
}