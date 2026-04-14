#include <iostream>
#include <vector>
using namespace std;

void change(vector<vector<int>>& v) {
    for (int i = 0; i < v.size(); i++)
        for (int j = 0; j < v[i].size(); j++)
            v[i][j] *= 10;
}

int main() {
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }

    cout << endl;

    change(v);
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}