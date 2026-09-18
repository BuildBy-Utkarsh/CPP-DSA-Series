#include <iostream>
using namespace std;

// int main() {
//     int rupees;

//     cout << "How many rupees you have: ";
//     cin >> rupees;

//     cout << "100 rupee notes: " << rupees / 100 << endl;
//     rupees = rupees % 100;

//     cout << "50 rupee notes: " << rupees / 50 << endl;
//     rupees = rupees % 50;

//     cout << "20 rupee notes: " << rupees / 20 << endl;
//     rupees = rupees % 20;

//     cout << "10 rupee notes: " << rupees / 10 << endl;
//     rupees = rupees % 10;

//     cout << "1 rupee coins: " << rupees << endl;

//     return 0;
// }


// switch 

#include <iostream>
using namespace std;

int main() {
    int rupees;
    int choice;

    cout << "Enter rupees: ";
    cin >> rupees;

    for (int i = 0; i < 5; i++) {

        switch (i) {
            case 0:
                choice = 100;
                break;

            case 1:
                choice = 50;
                break;

            case 2:
                choice = 20;
                break;

            case 3:
                choice = 10;
                break;

            case 4:
                choice = 1;
                break;
        }

        cout << choice << " rupee: " << rupees / choice << endl;
        rupees = rupees % choice;
    }

    return 0;
}
