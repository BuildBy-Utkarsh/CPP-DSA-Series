#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++) {
        int next = a + b;
        a = b;
        b = next;
    }

    return a;
}

int main() {
    int n;
    cout <<"Enter your desired nth fibonacci term : ";
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}