#include <iostream>
#include <vector>
using namespace std;

/* method 2 */
void dutch_flag_algorithm(vector<int>& v) {
    int n = v.size();

    int l = 0;
    int m = 0;
    int h = n - 1;
    while (m <= h) {
        if (v[m] == 0) {
            swap(v[l], v[m]);
            l++;
            m++;
        }
        else if (v[m] == 1) m++;
        else if (v[m] == 2) {
            swap(v[m], v[h]);
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
//         else if (v[i] == 1) noo++;
//     }

//     for (int i = 0; i < n; i++) {
//         if (i < noz) v[i] = 0;
//         else if (i < noz + noo) v[i] = 1;
//         else v[i] = 2;
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

    /* method 2 - three pointers method || dutch flag algorithm */
    dutch_flag_algorithm(v);

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}