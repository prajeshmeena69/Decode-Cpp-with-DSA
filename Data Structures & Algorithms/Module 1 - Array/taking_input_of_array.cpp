#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    // input
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // output

    /* method 1 */
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    /* method 2 */
    for (int i = 0; i < n; i++)
        cout << i[arr] << " ";
    cout << endl;
}