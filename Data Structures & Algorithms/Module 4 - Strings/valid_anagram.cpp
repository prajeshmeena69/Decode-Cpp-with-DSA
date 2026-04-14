#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t) return true;
    else return false;
}

int main() {
    string s, t;
    cin >> s >> t;

    bool flag = isAnagram(s, t);
    if (flag) cout << "true" << endl;
    else cout << "false" << endl;
}