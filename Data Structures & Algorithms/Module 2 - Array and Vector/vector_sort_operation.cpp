#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 4, 3, 2, 1};
    
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}