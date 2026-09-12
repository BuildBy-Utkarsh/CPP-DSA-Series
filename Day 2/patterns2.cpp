#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter your number" << endl;
    // cin >> n;
    // int  i = 1;
    // while (i<=n)
    // {
    //     int j  = 1;
    //     while(j<=n){
    //         cout <<n-j+1;
    //         j++;
    //     }
    //     cout <<endl;
    //     i++;
    // }
    

    //pattern 2

    // int n;
    // cout << "enter the number : ";
    // cin >> n;
    // cout << endl;
    // int row =1;
    // while(row<=n){
    //     int col =1;
    //     while(col<=row){
    //         cout <<"* ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }


    //pattern 3

    // int n;
    // cout << "provide input : ";
    // cin>>n;
    // int row =1;
    // while(row<=n){
    //     int col = 1;
    //     while(col<=row){
    //         cout << row;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    //pattern 4

    // int n;
    // cout << "provide input : ";
    // cin>>n;
    // int row =1;
    // int count=1;
    // while(row<=n){
    //     int col =1;
    //     while(col<=row){
    //         cout << count <<" ";
    //         col++;
    //         count++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //pattern5

    //   int n;
    // cout << "provide input : ";
    // cin>>n;
    // int row =1;
   
    // while(row<=n){
    //     int col =1;
    //      int value = row;
    //     while(col<=row){
    //         cout << value <<" ";
    //         col++;
    //         value++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //pattern 6 

    // int n; 
    // cin>>n;

    // int  i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout << i-j+1 << " ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // pattern 7

    // int n;
    // cin >>n;
    // int row =1;
    // while(row <=n){
    //     int col =1;
    //     char ch = 'A'+ row -1;
    //     while(col<=n){
    //         cout << ch <<" ";
    //         col++;
    //     }
    //     cout <<endl;
    //     row++;
    // }

    //pattern 8

      int n;
     cin >>n;
     int row =1;
     while(row <=n){
         int col =1;
        
            while(col<=3){
            char ch = 'A'+ col -1;
            cout << ch <<" ";
            col++;
        }
         cout <<endl;
         row++;
     }


    
}