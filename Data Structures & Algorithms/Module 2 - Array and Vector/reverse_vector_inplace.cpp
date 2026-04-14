#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    /* method 1 */
    // int i = 0;
    // int j = n - 1;
    // while (i <= j) {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }

    /* method 2 */
    for (int i = 0, j = n - 1; i <= j; i++, j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    /* method 3 */
    // reverse(v.begin(), v.end());

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}