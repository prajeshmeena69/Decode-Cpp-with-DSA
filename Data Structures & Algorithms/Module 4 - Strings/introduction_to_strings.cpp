#include <iostream>
using namespace std;

int main() {
    /* method 1 */
    // char str[5] = {'a','b','c','d','e'};
    // for (int i = 0; i < 5; i++)
    //     cout << str[i];
    // cout << endl;

    /* method 2 */
    // char str[5] = "abcd"; // str[4] = '\0'
    // for (int i = 0; i < 5; i++)
    //     cout << str[i];
    // cout << endl;

    /*
    // char ch = '\0';
    // // cout << ch;
    // cout << (int)ch << endl;

    // cout << "abc\ndef" << endl;
    // cout << "abc\tdef" << endl;
    // cout << "abc\0def" << endl;

    char str[5] = {'a','b','c','d','e'};
    // cout << str[5];
    cout << (int)(str[5]) << endl;
    */

    /* method 3 */
    // char str[] = {'a','b','c','d','e','f'};
    // for (int i = 0; str[i] != '\0'; i++)
    //     cout << str[i];
    // cout << endl;

    /* method 4 */
    char str[] = {'a','b','c','d','e','f'};
    cout << str << endl;

    /*
    char str[] = {'a','b','\0','d','e'};
    cout << str << endl;
    */
}