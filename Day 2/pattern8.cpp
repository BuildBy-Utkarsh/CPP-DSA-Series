#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    
    while (row <= n) {

        // spaces
        int space = n - 1;
        while (space > 0) {
            cout << " ";
            space--;
        }

        // stars
        int col = 1;
        while (col <=row  ) {
            cout << row+col-1 ;
            col++;
            
        }

        cout << endl;
        row++;
    }

    return 0;
}
