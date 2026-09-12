#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;

    while (row <= n) {

        // numbers 1
        int col = 1;
        while (col <= n - row +1) {
            cout << col;
            col++;
        }

         // stars
        col = 2;
        while (col <= row) {
            cout <<"*";
            col++;
        }

        //numbers 2

        col = n-row+1;
        while (col >=1 ) {
            cout << col;
            col--;
        }



        cout << endl;
        row++;
    }

    return 0;
}