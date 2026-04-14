#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "abcd";
    cout << str << endl;

    // reverse(str.begin(), str.end());
    // cout << str << endl;

    reverse(str.begin() + 2, str.end());
    cout << str << endl;
}