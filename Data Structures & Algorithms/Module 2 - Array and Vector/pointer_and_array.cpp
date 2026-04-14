#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ptr;
    ptr = arr;
    cout << ptr << endl;
    ptr = &arr[0];
    cout << ptr << endl;

    cout << endl;

    /* method 1 */
    for (int i = 0; i < n; i++)
        cout << ptr[i] << " ";
    cout << endl;

    /* method 2 */
    // for (int i = 0; i < n; i++)
    //     cout << i[ptr] << " ";
    // cout << endl;

    for (int i = 0; i < n; i++) {
        *ptr *= 100;
        ptr++;
    }

    ptr = arr;

    /* method 3 */
    for (int i = 0; i < n; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
}