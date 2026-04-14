#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    /* method 1 */
    // cout << str.size() << endl;

    /* method 2 */
    cout << str.length() << endl;
}