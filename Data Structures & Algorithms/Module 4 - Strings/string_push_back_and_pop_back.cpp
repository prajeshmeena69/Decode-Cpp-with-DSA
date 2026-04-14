#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abcd";
    cout << str << endl;

    str.push_back('e');
    str.push_back('f');
    str.push_back('g');
    str.push_back('h');
    cout << str << endl;

    str.pop_back();
    str.pop_back();
    str.pop_back();
    str.pop_back();
    cout << str << endl;
}