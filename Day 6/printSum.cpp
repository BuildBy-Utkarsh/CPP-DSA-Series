// #include<iostream>
// using namespace std;
// int sum =0;
//     int printSum(int arr[] , int size){
//         for(int i= 0; i<size; i++){
//         sum += arr[i];
//          cout << arr[i] << endl; 
//         }
//         return sum;
//     }
//  int main(){
//     int n;
//     cin >> n;
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int total = printSum( arr , 9);
//     cout << "Sum = " << total << endl;

//     return 0;
//  }



#include <iostream>
using namespace std;

int printSum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int total = printSum(arr, 9);

    cout << "Sum = " << total << endl;

    return 0;
}