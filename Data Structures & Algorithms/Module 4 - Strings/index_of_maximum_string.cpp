#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int idx = -1;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
        if (max < stoi(v[i])) {
            max = stoi(v[i]);
            idx = i;
        }

    cout << idx << endl;
}