#include<iostream>
using namespace std;
int main(){

    int n; 
    cin >> n;
    int i = 1;
    while(i<=n){

        int j=1;
        while(j<=n){
            cout <<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<endl;
    cout<<endl;

    //pattern 2 

    int k;
    cin >>k;
    int m = 1;
    while(m<k){
        int b = 1;
        while(b<=k){
            cout << m;
            b++;
        }
        cout<<endl;
        m++;
    }

}