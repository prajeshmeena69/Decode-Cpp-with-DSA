#include <iostream>
using namespace std;

/* method 2 */
int power(int a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

/* method 1 */
// int power(int a, int b) {
//     int res = 1;
//     for (int i = 1; i <= b; i++) res *= a;
//     return res;
// }

int main() {
    int a, b;
    cin >> a >> b;

    int res = power(a, b);
    cout << res << endl;
}