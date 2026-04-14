#include <iostream>
#include <vector>
using namespace std;

/* method 3 */
int trap(vector<int>& v) {
    int n = v.size();

    int max = v[0];
    vector<int> res(n);
    res[0] = -1;
    for (int i = 1; i < n; i++) {
        res[i] = max;
        if (max < v[i]) max = v[i];
    }

    max = v[n - 1];
    res[n - 1] = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (max < res[i]) res[i] = max;
        if (max < v[i]) max = v[i];
    }

    int water = 0;
    for (int i = 0; i < n; i++)
        if (v[i] < res[i])
            water += (res[i] - v[i]);

    return water;
}

/* method 2 */
// int trap(vector<int>& v) {
//     int n = v.size();

//     int pmax = -1;
//     vector<int> prev(n);
//     for (int i = 0; i < n; i++) {
//         prev[i] = pmax;
//         if (pmax < v[i]) pmax = v[i];
//     }

//     int nmax = -1;
//     vector<int> next(n);
//     for (int i = n - 1; i >= 0; i--) {
//         next[i] = nmax;
//         if (nmax < v[i]) nmax = v[i];
//     }

//     vector<int> res(n);
//     for (int i = 0; i < n; i++)
//         res[i] = min(prev[i], next[i]);

//     int water = 0;
//     for (int i = 0; i < n; i++)
//         if (v[i] < res[i])
//             water += (res[i] - v[i]);

//     return water;
// }

/* method 1 */
// int trap(vector<int>& v) {
//     int n = v.size();

//     int lmax = -1;
//     vector<int> left(n);
//     for (int i = 0; i < n; i++) {
//         if (lmax < v[i]) lmax = v[i];
//         left[i] = lmax;
//     }

//     int rmax = -1;
//     vector<int> right(n);
//     for (int i = n - 1; i >= 0; i--) {
//         if (rmax < v[i]) rmax = v[i];
//         right[i] = rmax;
//     }

//     vector<int> res(n);
//     for (int i = 0; i < n; i++)
//         res[i] = min(left[i], right[i]);

//     int water = 0;
//     for (int i = 0; i < n; i++)
//         water += abs(res[i] - v[i]);

//     return water;
// }

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int water = trap(v);
    cout << water << endl;
}