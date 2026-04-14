#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0;
    int h = n - 1;
    while (l <= h) {
        if (v[l] < 0) l++;
        if (v[h] > 0) h--;
        if (l > h) break;
        if (v[l] > 0 && 0 > v[h]) {
            swap(v[l], v[h]);
            l++;
            h--;
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}