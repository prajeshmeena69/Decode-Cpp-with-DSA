#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // input

    /* method 1 */
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    //     cin >> v[i];

    /* method 2 */
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        v.push_back(el);
    }

    // output
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}