#include <iostream>
#include <climits>
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

    int smax = INT_MIN;
    int max = INT_MIN;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            if (max < arr[i][j]) {
                smax = max;
                max = arr[i][j];
            }

            if (smax < arr[i][j] && arr[i][j] != max)
                smax = arr[i][j];
        }

    cout << smax << endl;
}