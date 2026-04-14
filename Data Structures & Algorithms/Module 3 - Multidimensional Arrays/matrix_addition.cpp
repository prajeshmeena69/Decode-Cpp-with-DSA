#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    cout << endl;

    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    cout << endl;

    int b[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> b[i][j];

    cout << endl;

    /* method 1 */
    // int res[r][c];
    // for (int i = 0; i < r; i++)
    //     for (int j = 0; j < c; j++)
    //         res[i][j] = a[i][j] + b[i][j];

    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++)
    //         cout << res[i][j] << " ";
    //     cout << endl;
    // }

    /* method 2 */
    // for (int i = 0; i < r; i++) {
    //     for (int j = 0; j < c; j++)
    //         cout << a[i][j] + b[i][j] << " ";
    //     cout << endl;
    // }

    /* method 3 */
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            b[i][j] += a[i][j];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}