#include <iostream>
using namespace std;

int main() {
    int rows = 8;  // Number of rows

    for (int i = rows; i > 0; i--) {  // Outer loop controls rows
        for (int j = 0; j < i; j++) { // Inner loop controls columns
            cout << "# ";
        }
        cout << endl;  // Move to the next row
    }

    return 0;
}
