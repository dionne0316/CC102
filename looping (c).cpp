#include <iostream>
using namespace std;

int main() {
    int rows = 8;  // Number of rows

    for (int i = 1; i <= rows; i++) {  // Outer loop controls rows
        for (int j = 1; j <= i; j++) { // Inner loop controls columns
            cout << "# ";
        }
        cout << endl;  // Move to the next row
    }

    return 0;
}
