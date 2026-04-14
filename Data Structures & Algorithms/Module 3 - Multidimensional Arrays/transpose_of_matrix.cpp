#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    cout << endl;

    int arr[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    cout << endl;

    /* method 1 */
    // for (int i = 0; i < c; i++) {
    //     for (int j = 0; j < r; j++)
    //         cout << arr[j][i] << " ";
    //     cout << endl;
    // }

    /* method 2 */
    int res[c][r];
    for (int i = 0; i < c; i++)
        for (int j = 0; j < r; j++)
            res[i][j] = arr[j][i];

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
}