#include <iostream>
using namespace std;

int main() {
    int rows = 8; // Number of rows

    for (int i = 1; i <= rows; i++) { // Outer loop for rows
        // Print leading spaces to align with the format
        for (int k = 1; k <= (rows - i) * 2; k++) {
            cout << " "; // Two spaces for alignment
        }

        // Print numbers in ascending order
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl; // Move to the next row
    }

    return 0;
}
