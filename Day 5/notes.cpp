#include <iostream>
using namespace std;

int main() {
    int rupees;

    cout << "How many rupees you have: ";
    cin >> rupees;

    cout << "100 rupee notes: " << rupees / 100 << endl;
    rupees = rupees % 100;

    cout << "50 rupee notes: " << rupees / 50 << endl;
    rupees = rupees % 50;

    cout << "20 rupee notes: " << rupees / 20 << endl;
    rupees = rupees % 20;

    cout << "10 rupee notes: " << rupees / 10 << endl;
    rupees = rupees % 10;

    cout << "1 rupee coins: " << rupees << endl;

    return 0;
}
