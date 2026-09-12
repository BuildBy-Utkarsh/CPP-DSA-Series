#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;

    while (row <= n) {

        // spaces
        int col = 1;
        while (col <= n - row) {
            cout << " ";
            col++;
        }

        // numbers
        col = 1;
        while (col <= row) {
            cout << col;
            col++;
        }

        //number 2

        col = 2;
        while (col <= row) {
            cout << row-col+1;
            col++;
        }



        cout << endl;
        row++;
    }

    return 0;
}