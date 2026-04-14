#include <iostream>
#include <vector>
using namespace std;

/* method 2 */
void two_pointers_method(vector<int>& v) {
    int n = v.size();

    int l = 0;
    int h = n - 1;
    while (l <= h) {
        if (v[l] == 0) l++;
        if (v[h] == 1) h--;
        if (l > h) break;
        if (v[l] == 1 && v[h] == 0) {
            v[l] = 0;
            v[h] = 1;
            l++;
            h--;
        }
    }
}

/* method 1 */
// void two_pass_method(vector<int>& v) {
//     int n = v.size();

//     int noz = 0;
//     int noo = 0;
//     for (int i = 0; i < n; i++) {
//         if (v[i] == 0) noz++;
//         else noo++;
//     }

//     for (int i = 0; i < n; i++) {
//         if (i < noz) v[i] = 0;
//         else v[i] = 1;
//     }
// }

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    /* method 1 - two pass method */
    // two_pass_method(v);

    /* method 2 - two pointers method */
    two_pointers_method(v);

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}