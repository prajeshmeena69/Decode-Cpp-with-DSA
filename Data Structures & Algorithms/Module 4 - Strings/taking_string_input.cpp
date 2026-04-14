#include <iostream>
#include <string>
using namespace std;

int main() {
    /* method 1 */
    // string str;
    // cin >> str;
    // cout << str << endl;

    /* method 2 */
    string str;
    getline(cin, str);
    cout << str << endl;
}