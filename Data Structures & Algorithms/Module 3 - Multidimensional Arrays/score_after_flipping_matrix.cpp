#include <iostream>
#include <vector>
using namespace std;

int matrixScore(vector<vector<int>>& v) {
    int r = v.size();
    int c = v[0].size();

    for (int i = 0; i < r; i++)
        if (v[i][0] == 0)
            for (int j = 0; j < c; j++) {
                if (v[i][j] == 0) v[i][j] = 1;
                else v[i][j] = 0;
            }

    for (int j = 0; j < c; j++) {
        int noz = 0;
        int noo = 0;
        for (int i = 0; i < r; i++) {
            if (v[i][j] == 0) noz++;
            else noo++;
        }

        if (noz > noo)
            for (int i = 0; i < r; i++) {
                if (v[i][j] == 0) v[i][j] = 1;
                else v[i][j] = 0;
            }
    }

    int sum = 0;
    for (int i = 0; i < r; i++) {
        int x = 1;
        for (int j = c - 1; j >= 0; j--) {
            sum += v[i][j] * x;
            x *= 2;
        }
    }

    return sum;
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

    int res = matrixScore(v);
    cout << res << endl;
}