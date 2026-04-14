#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& v) {
    int r = v.size();
    int c = v[0].size();

    vector<vector<int>> res(c, vector<int>(r));
    for (int i = 0; i < c; i++)
        for (int j = 0; j < r; j++)
            res[i][j] = v[j][i];

    return res;
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

    vector<vector<int>> res = transpose(v);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[0].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}