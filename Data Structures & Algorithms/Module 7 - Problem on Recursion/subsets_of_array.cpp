#include <iostream>
#include <vector>
using namespace std;

void subsets(int *arr, int n, int idx, vector<int> v) {
    if (idx == n) {
        for (int el : v) cout << el;
        cout << endl;
        return;
    }
    subsets(arr, n, idx + 1, v);
    v.push_back(arr[idx]);
    subsets(arr, n, idx + 1, v);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> v;

    subsets(arr, n, 0, v);
}