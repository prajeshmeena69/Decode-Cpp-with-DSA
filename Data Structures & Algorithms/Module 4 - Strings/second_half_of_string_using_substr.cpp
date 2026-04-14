#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    cout << str.substr(str.length()/2) << endl;
}