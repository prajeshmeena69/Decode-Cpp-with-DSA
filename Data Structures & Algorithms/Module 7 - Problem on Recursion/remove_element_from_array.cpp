#include <iostream>
#include <vector>
using namespace std;

void remove_element(vector<int>& res, vector<int>& v, int el, int idx) {
    if (idx == v.size()) return;

    int num = v[idx];
    if (num == el) remove_element(res, v, el, idx + 1);
    else {
        res.push_back(num);
        remove_element(res, v, el, idx + 1);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n), res;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int el;
    cin >> el;

    remove_element(res, v, el, 0);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}