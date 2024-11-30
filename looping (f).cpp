#include <iostream>
using namespace std;

int main() {
    int rows = 9; // Number of rows

    // Generate the pattern
    for (int i = 0; i < rows; i++) {
        // Print '#' for the first section
        for (int j = 0; j < i; j++) {
            cout << "#";
        }

        // Print a space between the two sections
        cout << " ";

        // Print '#' for the second section
        for (int j = i; j < rows; j++) {
            cout << "#";
        }

        // Move to the next line
        cout << endl;
    }

    return 0;
}
