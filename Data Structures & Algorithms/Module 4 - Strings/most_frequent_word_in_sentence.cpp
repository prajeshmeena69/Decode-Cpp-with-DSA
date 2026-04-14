#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss >> temp) v.push_back(temp);

    sort(v.begin(), v.end());

    /* method 1 */
    // int maxc = INT_MIN;
    // int c = 1;
    // for (int i = 1; i < v.size(); i++) {
    //     if (v[i - 1] == v[i]) c++;
    //     else c = 1;
    //     maxc = max(maxc, c);
    // }

    // c = 1;
    // for (int i = 1; i < v.size(); i++) {
    //     if (v[i - 1] == v[i]) c++;
    //     else c = 1;
    //     if (maxc == c) cout << v[i] << " -> " << maxc << endl;
    // }

    /* method 2 */
    int maxc = INT_MIN;
    int c = 1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == v[i + 1]) c++;
        else c = 1;
        maxc = max(maxc, c);
    }

    c = 1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == v[i + 1]) c++;
        else c = 1;
        if (maxc == c) cout << v[i] << " -> " << maxc << endl;
    }
}