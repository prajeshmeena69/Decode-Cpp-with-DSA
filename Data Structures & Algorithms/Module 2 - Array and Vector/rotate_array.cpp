#include <iostream>
#include <vector>
using namespace std;

void reverse_part(vector<int>& v, int a, int b) {
    while (a <= b) {
        int temp = v[a];
        v[a] = v[b];
        v[b] = temp;
        a++;
        b--;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int k;
    cin >> k;
    if (k > n) k %= n;

    reverse_part(v, 0, n - k - 1);
    reverse_part(v, n - k, n - 1);
    reverse_part(v, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}