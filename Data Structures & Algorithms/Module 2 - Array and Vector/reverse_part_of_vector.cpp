#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int a, b;
    cin >> a >> b;

    while (a <= b) {
        int temp = v[a];
        v[a] = v[b];
        v[b] = temp;
        a++;
        b--;
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}