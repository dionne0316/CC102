#include <iostream>
using namespace std;

int main() {
    int rows = 5; // Number of rows
    int symbols = 10; // Number of symbols per row

    for (int i = 0; i < rows; i++) {
        // Print leading space for odd rows
        if (i % 2 != 0) {
            cout << " ";
        }

        // Print the '^' symbols with spaces
        for (int j = 0; j < symbols; j++) {
            cout << "^ ";
        }

        cout << endl; // Move to the next row
    }

    return 0;
}
