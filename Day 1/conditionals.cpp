#include<iostream>
using namespace std;
int main(){
     //int a;
    //  cin >> a;
    // // cout << "hello" <<endl;
    // // cout <<"value of n is : " << n << endl;

    // if (a>0){
    //     cout << "A is positive" << endl;
    // }
    // else{
    //     cout << "A is negative" << endl;
    // }

    // int i,j;
    // cin >> i >> j;
    // cout << "value of i and j is : " << i << " and " <<  j << endl;

    // a = cin.get();
    // cout<<"Value of a is : " << a << endl;

    // int a,b;
    // cout <<"enter the value of A " << endl;
    // cin >> a;
    // cout <<"enter the value of B " << endl;
    // cin >> b;

    // if (a>b)
    // {
    //     cout << "A is greater" << endl;
    // }
    // else{
    //     cout << "B is greater" << endl;
    // }

    // int a  ;
    // cout << "enter your number" << endl;
    // cin >> a;
    
    
    // if (a>0)
    // {
    //     cout << a << " is positive " << endl;
    // }
    // else if(a<0){
    //     cout <<  a << " is negative" << endl;
    // }
    // else{
    //     cout << a <<" is 0" << endl;
    // }

    char ch ;
    cout << "enter what you like" << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        cout << "this is lowercase" << endl;
    }
    else if(ch >= 'A' && ch <= 'Z' ){
        cout << "this is uppercase" << endl;
    }
    else if(ch >= '0' && ch<= '9'){
        cout << "this is numeric" << endl;
    }
    else{
        cout << "invalid input" << endl;
    }
        

}