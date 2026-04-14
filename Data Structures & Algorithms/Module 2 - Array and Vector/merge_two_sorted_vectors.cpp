#include <iostream>
#include <vector>
using namespace std;

/* method 2 */
vector<int> merge_sorted_vectors(vector<int>& v1, vector<int>& v2) {
    int n = v1.size();
    int m = v2.size();

    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;

    vector<int> res(n + m);
    while (i != -1 && j != -1) {
        if (v1[i] > v2[j]) res[k--] = v1[i--];
        else res[k--] = v2[j--];
    }

    while (i != -1) res[k--] = v1[i--];
    while (j != -1) res[k--] = v2[j--];

    return res;
}

/* method 1 */
// vector<int> merge_sorted_vectors(vector<int>& v1, vector<int>& v2) {
//     int n = v1.size();
//     int m = v2.size();

//     int i = 0;
//     int j = 0;
//     int k = 0;

//     vector<int> res(n + m);
//     while (i < n && j < m) {
//         if (v1[i] < v2[j]) res[k++] = v1[i++];
//         else res[k++] = v2[j++];
//     }

//     while (i < n) res[k++] = v1[i++];
//     while (j < m) res[k++] = v2[j++];

//     return res;
// }

int main() {
    vector<int> v1 = {1, 4, 5, 8};
    vector<int> v2 = {2, 3, 6, 7, 9, 10};

    vector<int> res = merge_sorted_vectors(v1, v2);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}