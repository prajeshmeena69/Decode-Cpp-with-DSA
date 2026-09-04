#include <iostream>
#include <vector>
using namespace std;

void subsequences(vector<int>& v, int k, int idx, vector<int> res) {
    int n = v.size();
    if (idx == n) {
        if (res.size() == k) {
            for (int el : res) cout << el << " ";
            cout << endl;
        }
        return;
    }
    if (res.size() + (n - idx) < k) return;
    else {
        subsequences(v, k, idx + 1, res);
        res.push_back(v[idx]);
        subsequences(v, k, idx + 1, res);
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n), res;
    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    subsequences(v, k, 0, res);
}