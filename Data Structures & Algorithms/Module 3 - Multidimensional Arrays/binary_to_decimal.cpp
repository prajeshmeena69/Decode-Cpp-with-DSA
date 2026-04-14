#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    /* method 1 */
    // int sum = 0;
    // for (int i = n - 1; i >= 0; i--)
    //     if (v[i] == 1)
    //         sum += pow(2, n - i - 1);

    /* method 2 */
    int sum = 0;
    int x = 1;
    for (int i = n - 1; i >= 0; i--) {
        sum += v[i] * x;
        x *= 2;
    }

    cout << sum << endl;
}