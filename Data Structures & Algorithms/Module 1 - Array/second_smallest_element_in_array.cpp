#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min = INT_MAX;
    int smin = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            smin = min;
            min = arr[i];
        }

        if ((smin > arr[i]) && (arr[i] != min))
            smin = arr[i];
    }

    cout << smin << endl;
}