#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "123456789";

    int a = stoi(str);
    cout << a << endl;

    long long b = stoll(str);
    cout << b << endl;
}