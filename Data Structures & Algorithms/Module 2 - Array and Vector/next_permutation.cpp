#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void next_permutation(vector<int>& v) {
    int n = v.size();

    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
        if (v[i] < v[i + 1]) {
            idx = i;
            break;
        }

    if (idx == -1) {
        reverse(v.begin(), v.end());
        return;
    }
    else {
        reverse(v.begin() + idx + 1, v.end());
        int jmax = -1;
        for (int i = idx + 1; i < n; i++)
            if (v[i] > v[idx]) {
                jmax = i;
                break;
            }
        swap(v[idx], v[jmax]);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    next_permutation(v);

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}