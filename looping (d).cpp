#include <iostream>
using namespace std;

int main() {
    int rows = 8;  // Number of rows

    for (int i = 1; i <= rows; i++) {  // Outer loop controls rows
        for (int j = i; j >= 1; j--) { // Inner loop controls columns (reverse order)
            cout << j << " ";
        }
        cout << endl;  // Move to the next row
    }

    return 0;
}
