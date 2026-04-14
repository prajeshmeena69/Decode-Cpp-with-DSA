#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int x;
    cin >> x;

    int c = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            c++;

    cout << c << endl;
}