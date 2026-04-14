#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;
    while (ss >> word)
        cout << word << endl;
}