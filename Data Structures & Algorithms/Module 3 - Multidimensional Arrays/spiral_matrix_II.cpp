#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    int minr = 0;
    int minc = 0;
    int maxr = n - 1;
    int maxc = n - 1;

    int val = 1;
    int tne = n * n;
    vector<vector<int>> res(n, vector<int>(n));
    while (minr <= maxr && minc <= maxc) {
        for (int j = minc; j <= maxc && val <= tne; j++)
            res[minr][j] = val++;
        minr++;

        for (int i = minr; i <= maxr && val <= tne; i++)
            res[i][maxc] = val++;
        maxc--;

        for (int j = maxc; j >= minc && val <= tne; j--)
            res[maxr][j] = val++;
        maxr--;

        for (int i = maxr; i >= minr && val <= tne; i--)
            res[i][minc] = val++;
        minc++;
    }

    return res;
}

int main() {
    int n;
    cin >> n;

    cout << endl;

    vector<vector<int>> res = generateMatrix(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}