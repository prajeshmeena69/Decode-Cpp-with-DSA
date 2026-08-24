#include <iostream>
using namespace std;

void display(int *arr, int n, int idx) {
    if (idx == n) return;
    cout << arr[idx] << " ";
    display(arr, n, idx + 1);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    /* method 1 */
    // for (int el : arr)
    //     cout << el << " ";
    // cout << endl;

    /* method 2 */
    display(arr, n, 0);
    cout << endl;
}