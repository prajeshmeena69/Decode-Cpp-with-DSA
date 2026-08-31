#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> res;

void subset(vector<int>& v, int idx, vector<int> num) {
    if (idx == v.size()) {
        res.push_back(num);
        return;
    }
    subset(v, idx + 1, num);
    num.push_back(v[idx]);
    subset(v, idx + 1, num);
}

vector<vector<int>> subsets(vector<int>& v) {
    vector<int> num;
    subset(v, 0, num);
    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<vector<int>> res = subsets(v);
    for (vector<int> vec : res) {
        for (int el : vec) cout << el;
        cout << endl;
    }
}