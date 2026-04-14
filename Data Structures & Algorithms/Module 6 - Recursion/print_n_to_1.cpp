#include <iostream>
using namespace std;

/* method 2 */
void print(int n) {
    if (n == 0) return;
    cout << n << " ";
    print(n - 1);
}

/* method 1 */
// void print(int el, int n) {
//     if (el > n) return;
//     print(el + 1, n);
//     cout << el << " ";
// }

int main() {
    int n;
    cin >> n;

    // print(1, n);
    print(n);
}