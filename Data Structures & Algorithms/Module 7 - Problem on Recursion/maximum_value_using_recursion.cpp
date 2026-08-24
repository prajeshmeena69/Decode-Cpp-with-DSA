#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

// void maximum_value(int *arr, int n, int idx, int max) {
//     if (idx == n) {
//         cout << max << endl;
//         return;
//     }
//     if (max < arr[idx]) max = arr[idx];
//     maximum_value(arr, n, idx + 1, max);
// }

int maximum_element(int *arr, int n, int idx) {
    if (idx == n) return INT_MIN;
    return max(arr[idx], maximum_element(arr, n, idx + 1));
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    /* method 1 */
    // maximum_value(arr, n, 0, INT_MIN);

    /* method 2 */
    cout << maximum_element(arr, n, 0) << endl;
}