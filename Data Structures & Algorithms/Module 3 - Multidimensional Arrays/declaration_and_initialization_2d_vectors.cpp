#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v(3, vector<int>(3, 11));
    cout << v.size() << " " << v[0].size() << endl;

    cout << endl;

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}