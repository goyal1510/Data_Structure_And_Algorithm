#include<iostream>
using namespace std;
int main(){
    int num = 5 ;
    for(int i = 1 ; i <= num ; i ++){
        int c = 1;
        for(int j = 1 ; j<=i; j ++){
            cout<<c<<" ";
            c = c * (i-j)/j;
            
        }
        cout<<endl;
    }
}