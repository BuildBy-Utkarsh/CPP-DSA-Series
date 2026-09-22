#include<iostream>
using namespace std;
int main(){
int n,j;
cout << "enter number 1 : ";
cin >> n;
cout << "enter number 2 : ";
cin >> j;
int count = 0; 
while (n != 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }

    while (j != 0) {
        if (j & 1) {
            count++;
        }
        j = j >> 1;
    }

    cout << "Total number of 1s: " << count << endl;

    return 0;
}
