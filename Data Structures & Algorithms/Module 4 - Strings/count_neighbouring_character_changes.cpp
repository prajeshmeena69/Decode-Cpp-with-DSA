#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int c = 0;
    for (int i = 0; i < str.length() - 1; i++)
        if (str[i] != str[i + 1])
            c++;

    cout << c << endl;
}