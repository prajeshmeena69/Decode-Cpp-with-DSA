#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    reverse(str.begin(), str.begin() + str.length()/2);
    cout << str << endl;
}