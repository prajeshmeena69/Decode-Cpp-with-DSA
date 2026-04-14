#include <iostream>
using namespace std;

int main() {
    /* method 1 */
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    /* method 2 */
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* method 3 */
    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}