#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    string str;
    cin >> str;

    /* method 1 */
    // int maxc = INT_MIN;
    // for (int i = 0; i < str.length(); i++) {
    //     int c = 1;
    //     for (int j = i + 1; j < str.length(); j++)
    //         if (str[j] == str[i]) c++;
    //     if (maxc < c) maxc = c;
    // }

    // for (int i = 0; i < str.length(); i++) {
    //     int c = 1;
    //     for (int j = i + 1; j < str.length(); j++)
    //         if (str[j] == str[i]) c++;
    //     if (maxc == c) cout << str[i] << " -> " << maxc << endl;
    // }

    /* method 2 */
    vector<int> v(26, 0);
    for (int i = 0; i < str.length(); i++) {
        int idx = str[i] - 'a';
        v[idx] += 1;
    }

    int maxc = INT_MIN;
    for (int i = 0; i < v.size(); i++)
        if (maxc < v[i])
            maxc = v[i];

    for (int i = 0; i < v.size(); i++)
        if (maxc == v[i])
            cout << char(97 + i) << " -> " << maxc << endl;
}