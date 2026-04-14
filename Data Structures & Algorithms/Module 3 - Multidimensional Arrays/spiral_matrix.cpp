#include <iostream>
#include <vector>
using namespace std;

/* method 2 */
vector<int> spiralOrder(vector<vector<int>>& v) {
    int r = v.size();
    int c = v[0].size();

    int minr = 0;
    int minc = 0;
    int maxr = r - 1;
    int maxc = c - 1;

    int count = 0;
    int tne = r * c;
    vector<int> res;
    while (minr <= maxr && minc <= maxc) {
        for (int j = minc; j <= maxc && count < tne; j++) {
            res.push_back(v[minr][j]);
            count++;
        }
        minr++;

        for (int i = minr; i <= maxr && count < tne; i++) {
            res.push_back(v[i][maxc]);
            count++;
        }
        maxc--;

        for (int j = maxc; j >= minc && count < tne; j--) {
            res.push_back(v[maxr][j]);
            count++;
        }
        maxr--;

        for (int i = maxr; i >= minr && count < tne; i--) {
            res.push_back(v[i][minc]);
            count++;
        }
        minc++;
    }

    return res;
}

/* method 1 */
// vector<int> spiralOrder(vector<vector<int>>& v) {
//     int r = v.size();
//     int c = v[0].size();

//     int minr = 0;
//     int minc = 0;
//     int maxr = r - 1;
//     int maxc = c - 1;

//     vector<int> res;
//     while (minr <= maxr && minc <= maxc) {
//         for (int j = minc; j <= maxc; j++)
//             res.push_back(v[minr][j]);
//         minr++;

//         if (minr > maxr || minc > maxc) break;

//         for (int i = minr; i <= maxr; i++)
//             res.push_back(v[i][maxc]);
//         maxc--;

//         if (minr > maxr || minc > maxc) break;

//         for (int j = maxc; j >= minc; j--)
//             res.push_back(v[maxr][j]);
//         maxr--;

//         if (minr > maxr || minc > maxc) break;

//         for (int i = maxr; i >= minr; i--)
//             res.push_back(v[i][minc]);
//         minc++;
//     }

//     return res;
// }

int main() {
    int r, c;
    cin >> r >> c;

    cout << endl;

    vector<vector<int>> v(r, vector<int>(c));
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> v[i][j];

    cout << endl;

    vector<int> res = spiralOrder(v);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}