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

    for (int j = c - 1; j >= 0; j--) {
        if (j % 2 == 0)
            for (int i = 0; i < r; i++)
                cout << arr[i][j] << " ";

        else
            for (int i = r - 1; i >= 0; i--)
                cout << arr[i][j] << " ";
    }
}