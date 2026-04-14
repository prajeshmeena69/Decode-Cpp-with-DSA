#include <iostream>
using namespace std;

void factorial_upto(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
        cout << f << " ";
    }
    cout << endl;
}

// int factorial(int n) {
//     int res = 1;
//     for (int i = 1; i <= n; i++) res *= i;
//     return res;
// }

int main() {
    int n;
    cin >> n;

    // int res = factorial(n);
    // cout << res << endl;

    factorial_upto(n);
}