#include <iostream>
using namespace std;

int main() {
    int rows = 8; // Total number of rows

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) { 
            // For even rows
            cout << " #  *  #  *  #  *  #" << endl;
        } else { 
            // For odd rows
            cout << "#  *  #  *  #  *  # " << endl;
        }
    }

    return 0;
}
