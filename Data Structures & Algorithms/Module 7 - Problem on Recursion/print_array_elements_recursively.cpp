#include <iostream>
using namespace std;

void display(int *arr, int n, int idx) {
    if (idx == n) return;
    cout << arr[idx] << " ";
    display(arr, n, idx + 1);
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    /* method 1 */
    // for (int el : arr)
    //     cout << el << " ";
    // cout << endl;

    /* method 2 */
    display(arr, n, 0);
    cout << endl;
}