#include <iostream>
#include <string>
using namespace std;

void skip_character(string res, string str, int idx) {
    if (idx == str.length()) {
        cout << res << endl;
        return;
    }

    char ch = str[idx];
    if (ch == 'a') skip_character(res, str, idx + 1);
    else skip_character(res + ch, str, idx + 1);
}

int main() {
    string str;
    getline(cin, str);

    /* method 1 */
    // string res;
    // for (int i = 0; i < str.length(); i++)
    //     if (str[i] != 'a')
    //         res.push_back(str[i]);

    // cout << res << endl;

    /* method 2 */
    skip_character("", str, 0);
}