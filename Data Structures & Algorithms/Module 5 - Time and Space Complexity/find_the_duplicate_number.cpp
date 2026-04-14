#include <iostream>
#include <vector>
using namespace std;

/* method 3 */
int findDuplicate(vector<int>& v) {
    int n = v.size() - 1;

    int vsum = 0;
    for (int i = 0; i <= n; i++)
        vsum += v[i];

    int tsum = n * (n + 1) / 2;
    int res = vsum - tsum;

    return res;
}

/* method 2 */
// int findDuplicate(vector<int>& v) {
//     int n = v.size();

//     int res = -1;
//     vector<int> check(n + 1, 0);
//     for (int i = 0; i < n; i++) {
//         int idx = v[i];
//         if (check[idx] == 0) check[idx] = 1;
//         else {
//             res = idx;
//             break;
//         }
//     }

//     return res;
// }

/* method 1 - brute force */
// int findDuplicate(vector<int>& v) {
//     int n = v.size();

//     int res = -1;
//     bool flag = false;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++)
//             if (v[i] == v[j]) {
//                 res = v[j];
//                 flag = true;
//                 break;
//             }
//         if (flag) break;
//     }

//     return res;
// }

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int el = findDuplicate(v);
    cout << el << endl;
}