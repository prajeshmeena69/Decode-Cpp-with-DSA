#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1(5);
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;

    cout << endl;

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    cout << endl;

    vector<int> v2(5, 11);
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << endl;
}