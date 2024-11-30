#include <iostream>
using namespace std;

int main() {
    int rows = 7; // Number of rows in the top half of the pattern

    // Top half of the pattern
    for (int i = 1; i <= rows; i++) {
        // Print '#' symbols
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        // Print '^' symbol
        cout << "^" << endl;
    }

    // Bottom half of the pattern
    for (int i = rows; i >= 1; i--) {
        // Print '#' symbols
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        // Print '^' symbol
        cout << "^" << endl;
    }

    return 0;
}
