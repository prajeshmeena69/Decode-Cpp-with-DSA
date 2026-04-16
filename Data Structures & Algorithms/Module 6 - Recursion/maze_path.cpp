#include <iostream>
using namespace std;

/* method 2 */
int count_paths(int er, int ec) {
    if (er < 1 || ec < 1) return 0;
    if (er == 1 && ec == 1) return 1;
    int right = count_paths(er, ec - 1);
    int down = count_paths(er - 1, ec);
    int total = right + down;
    return total;
}

void print_paths(int er, int ec, string str) {
    if (er < 1 || ec < 1) return;
    if (er == 1 && ec == 1) {
        cout << str << endl;
        return;
    }
    print_paths(er, ec - 1, str + 'r');
    print_paths(er - 1, ec, str + 'd');
}

/* method 1 */
// int count_paths(int sr, int sc, int er, int ec) {
//     if (sr > er || sc > ec) return 0;
//     if (sr == er && sc == ec) return 1;
//     int right = count_paths(sr, sc + 1, er, ec);
//     int down = count_paths(sr + 1, sc, er, ec);
//     int total = right + down;
//     return total;
// }

// void print_paths(int sr, int sc, int er, int ec, string str) {
//     if (sr > er || sc > ec) return;
//     if (sr == er && sc == ec) {
//         cout << str << endl;
//         return;
//     }
//     print_paths(sr, sc + 1, er, ec, str + 'r');
//     print_paths(sr + 1, sc, er, ec, str + 'd');
// }

int main() {
    int r, c;
    cin >> r >> c;

    // cout << count_paths(1, 1, r, c) << endl;
    // print_paths(1, 1, r, c, "");

    cout << count_paths(r, c) << endl;
    print_paths(r, c, "");
}