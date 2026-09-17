#include<iostream>
using namespace std;
bool search (int arr[],int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main (){
    int arr[10] = {5,41,-10,12,6,21,0,8,9,3};
    cout<< "Enter the element to search for : ";
    int key;
    cin >> key;
    bool found = search(arr,10,key);
    if(found){
        cout << "Key is present " << endl;
    }
    else{
        cout << "Key is not present " << endl;
    }

    return 0;
}