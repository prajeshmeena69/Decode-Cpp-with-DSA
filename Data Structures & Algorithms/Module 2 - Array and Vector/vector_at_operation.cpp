#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(5);

    v.at(0) = 1;
    v.at(1) = 2;
    v.at(2) = 3;
    v.at(3) = 4;
    v.at(4) = 5;

    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
}