#include <iostream>
#include <vector>
using namespace std;

// pass by value
void output(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;
}

// pass by reference
void input(vector<int>& vec) { // & -> ampersand
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        vec.push_back(el);
    }
}

int main() {
    vector<int> v;

    input(v);
    output(v);
}