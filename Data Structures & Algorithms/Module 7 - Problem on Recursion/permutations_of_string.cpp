#include <iostream>
#include <string>
using namespace std;

void permutations(string res, string str) {
    if (str == "") {
        cout << res << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        string left = str.substr(0, i);
        string right = str.substr(i + 1);
        permutations(res + ch, left + right);
    }
}

int main() {
    string str;
    cin >> str;

    permutations("", str);
}