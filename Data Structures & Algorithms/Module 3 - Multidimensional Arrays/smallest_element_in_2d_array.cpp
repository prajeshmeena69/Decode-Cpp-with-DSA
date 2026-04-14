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

    int min = INT_MAX;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] < min)
                min = arr[i][j];

    cout << min << endl;
}