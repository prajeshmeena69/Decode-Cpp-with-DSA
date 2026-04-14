#include <iostream>
using namespace std;

void display(int *a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return;
}

void change(int b[]) {
    b[0] *= 100;
    b[1] *= 100;
    b[2] *= 100;
    b[3] *= 100;
    b[4] *= 100;

    return;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    display(arr, n);
    change(arr);
    display(arr, n);
}