#include <iostream>
using namespace std;

/* method 2 */
int fibonacci(int n) {
    if (n == 1 || n == 2) return 1;
    int l = fibonacci(n - 1);
    int r = fibonacci(n - 2);
    return l + r;
}

/* method 1 */
// int fibonacci(int n) {
//     if (n == 1 || n == 2) return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

int main() {
    int n;
    cin >> n;

    int res = fibonacci(n);
    cout << res << endl;
}