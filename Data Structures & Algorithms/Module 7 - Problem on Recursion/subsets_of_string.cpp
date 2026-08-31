#include <iostream>
#include <string>
#include <vector>
using namespace std;

void subsets(vector<string>& v, string res, string str, int idx) {
    if (idx == str.length()) {
        v.push_back(res);
        return;
    }
    subsets(v, res + str[idx], str, idx + 1);
    subsets(v, res, str, idx + 1);
}

// void subsets(string res, string str, int idx) {
//     if (idx == str.length()) {
//         cout << res << endl;
//         return;
//     }
//     subsets(res + str[idx], str, idx + 1);
//     subsets(res, str, idx + 1);
// }

// void subsets(string res, string str) {
//     if (str.length() == 0) {
//         cout << res << endl;
//         return;
//     }
//     subsets(res + str[0], str.substr(1));
//     subsets(res, str.substr(1));
// }

int main() {
    string str;
    cin >> str;

    /* method 1 */
    // subsets("", str);

    /* method 2 */
    // subsets("", str, 0);

    /* method 3 */
    vector<string> v;

    subsets(v, "", str, 0);
    for (string res : v)
        cout << res << endl;
}