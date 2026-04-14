#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& v, int el) {
    int r = v.size();
    int c = v[0].size();

    int i = 0;
    int j = c - 1;
    while (i <= r - 1 && j >= 0) {
        if (v[i][j] == el) return true;
        else if (v[i][j] < el) i++;
        else j--;
    }

    return false;
}

int main() {
    int r, c;
    cin >> r >> c;

    cout << endl;

    vector<vector<int>> v(r, vector<int>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> v[i][j];

    cout << endl;

    int el;
    cin >> el;

    cout << endl;

    if (searchMatrix(v, el)) cout << "true" << endl;
    else cout << "false" << endl;
}