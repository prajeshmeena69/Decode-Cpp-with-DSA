#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    int res = power(x, n/2);
    if (n % 2 == 0) return res * res;
    else return x * res * res;
}

int main() {
    int x, n;
    cin >> x >> n;

    int res = power(x, n);
    cout << res << endl;
}