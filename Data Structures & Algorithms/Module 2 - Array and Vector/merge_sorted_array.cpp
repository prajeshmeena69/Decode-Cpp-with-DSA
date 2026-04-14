#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& v1, int n, vector<int>& v2, int m) {
    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;

    while (i != -1 && j != -1) {
        if (v1[i] > v2[j]) v1[k--] = v1[i--];
        else v1[k--] = v2[j--];
    }

    while (i != -1) v1[k--] = v1[i--];
    while (j != -1) v1[k--] = v2[j--];
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v1(n + m), v2(m);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < m; i++)
        cin >> v2[i];

    merge(v1, n, v2, m);

    for (int i = 0; i < n + m; i++)
        cout << v1[i] << " ";
    cout << endl;
}