#include <iostream>
using namespace std;

/* method 2 */
int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

/* method 1 */
// void sum_1_to_n(int sum, int n) {
//     if (n == 0) {
//         cout << sum << endl;
//         return;
//     }
//     sum_1_to_n(sum + n, n - 1);
// }

int main() {
    int n;
    cin >> n;

    // sum_1_to_n(0, n);

    int res = sum(n);
    cout << res << endl;
}