#include <iostream>
using namespace std;

/* method 2 */
void print(int n) {
    if (n == 0) return;
    print(n - 1);
    cout << n << " ";
}

/* method 1 */
// void print(int el, int n) {
//     if (el > n) return;
//     cout << el << " ";
//     print(el + 1, n);
// }

int main() {
    int n;
    cin >> n;

    // print(1, n);
    print(n);
}