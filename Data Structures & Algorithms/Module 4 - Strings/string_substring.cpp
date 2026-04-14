#include <iostream>
#include <string>
using namespace std;

int main() {
    /* method 1 */
    // string str = "abcd";
    // for (int i = 0; i < str.length(); i++)
    //     cout << str.substr(i) << endl;

    /* method 2 */
    string str = "abcdef";
    cout << str.substr(2, 2) << endl;
}