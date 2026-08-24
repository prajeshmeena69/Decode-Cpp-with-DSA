#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v, int idx) {
    if (idx == v.size()) return;
    cout << v[idx] << " ";
    display(v, idx + 1);
}

int main() {
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    display(v, 0);
    cout << endl;
}