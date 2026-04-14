#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    vector<int> a(150, -1);
    for (int i = 0; i < s.length(); i++) {
        int idx = (int)(s[i]);
        int val = abs(s[i] - t[i]);
        if (a[idx] == -1 || a[idx] == val) a[idx] = val;
        else return false;
    }

    vector<int> b(150, -1);
    for (int i = 0; i < t.length(); i++) {
        int idx = (int)(t[i]);
        int val = abs(t[i] - s[i]);
        if (b[idx] == -1 || b[idx] == val) b[idx] = val;
        else return false;
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    bool flag = isIsomorphic(s, t);
    if (flag) cout << "true" << endl;
    else cout << "false" << endl;
}