#include<iostream>
using namespace std;
int main(){
    int n = 6 ;
    for(int i = 0 ;  i < n ; i ++){
        //space 
        for(int j = 0 ; j < i ; j ++){
            cout<<"  ";
        }
        // stars
        for(int j = 0 ; j < n - i; j++){
            cout<<"*   ";
        }
        cout<<endl;
    }
    
}