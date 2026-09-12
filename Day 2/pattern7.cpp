// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int row = 1;
  

//     while (row <= n) {

//         // spaces
//         int space = row - 1;
//         while (space > 0) {
//             cout << " ";
//             space--;
//         }

//         // stars
//         int col = 1;
        
//         while (col <=n ) {
//             cout << col;
//             col++;
//         }

//         cout << endl;
//         row++;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int row = 1; row <= n; row++) {

        // spaces before numbers
        for (int col = 1; col < row; col++) {
            cout << "  ";
        }

        // print numbers
        for (int col = row; col <= n; col++) {
            cout << col << " ";
        }

        cout << endl;
    }

    return 0;
}

