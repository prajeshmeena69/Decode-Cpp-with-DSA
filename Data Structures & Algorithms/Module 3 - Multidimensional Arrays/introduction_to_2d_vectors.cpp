#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* method 1 */
    // vector<vector<int>> v(5);

    // v[0] = {1};
    // v[1] = {2, 3};
    // v[2] = {4, 5, 6};
    // v[3] = {7, 8};
    // v[4] = {9};

    /* method 2 */
    vector<vector<int>> v;

    vector<int> v1 = {1};
    vector<int> v2 = {2, 3};
    vector<int> v3 = {4, 5, 6};
    vector<int> v4 = {7, 8};
    vector<int> v5 = {9};

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}