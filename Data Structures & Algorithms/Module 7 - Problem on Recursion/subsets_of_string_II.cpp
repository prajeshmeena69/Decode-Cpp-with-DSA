#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void subsets(string res, string str, bool flag) {
    if (str.length() == 0) {
        cout << res << endl;
        return;
    }

    char a = str[0];
    if (str.length() == 1) {
        subsets(res + a, str.substr(1), true);
        subsets(res, str.substr(1), true);
        return;
    }

    char b = str[1];
    if (a == b) {
        if (flag) subsets(res + a, str.substr(1), true);
        subsets(res, str.substr(1), false);
    }
    else {
        if (flag) subsets(res + a, str.substr(1), true);
        subsets(res, str.substr(1), true);
    }
}

int main() {
    string str;
    cin >> str;

    sort(str.begin(), str.end());
    subsets("", str, true);
}