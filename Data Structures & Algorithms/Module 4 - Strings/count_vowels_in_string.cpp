#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    /* method 1 */
    // int c = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    //     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    //         c++;

    /* method 2 */
    int c = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') c++;
        i++;
    }

    cout << c << endl;
}