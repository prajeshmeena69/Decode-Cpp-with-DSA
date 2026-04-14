#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int n) {
    vector<vector<int>> res;

    for (int i = 0; i < n; i++) {
        vector<int> v(i + 1);
        res.push_back(v);
        
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) res[i][j] = 1;
            else res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    cout << endl;

    vector<vector<int>> res = generate(n);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j <= i; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}