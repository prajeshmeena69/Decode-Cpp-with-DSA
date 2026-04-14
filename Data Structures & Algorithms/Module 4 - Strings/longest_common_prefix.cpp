#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

string longestCommonPrefix(vector<string>& v) {
    int n = v.size();
    sort(v.begin(), v.end());

    string res = "";
    for (int i = 0; i < v[0].length(); i++) {
        if (v[0][i] == v[n - 1][i]) res += v[0][i];
        else break;
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    string res = longestCommonPrefix(v);
    cout << res << endl;
}