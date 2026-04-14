#include <iostream>
using namespace std;

void last_name() {
    cout << "meena" << endl;
}

void middle_name() {
    cout << "singh" << " ";
    last_name();
}

void first_name() {
    cout << "prajesh" << " ";
    middle_name();
}

void name() {
    first_name();
}

int main() {
    name();
}