#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int a = 0;
    int b = 1;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";

        int nextNumber = a + b;
        a = b;
        b = nextNumber;
    }

 return 0;
}
