#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int idx) {
    vector<vector<int>> v;
    for (int i = 0; i <= idx; i++) {
        vector<int> num(i + 1);
        v.push_back(num);
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) v[i][j] = 1;
            else v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }

    vector<int> res(idx + 1);
    for (int i = 0; i < v[idx].size(); i++)
        res[i] = v[idx][i];

    return res;
}

int main() {
    int idx;
    cin >> idx;

    cout << endl;

    vector<int> res = getRow(idx);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}