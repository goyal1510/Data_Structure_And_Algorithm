#include<iostream>
using namespace std;
int main(){
    int num = 6 ; 
    for(int i = 0 ; i < num ; i ++){
        int k = 0 ;
        for( int j = 0 ; j < (2*num-1); j++){
            if(j<num-i-1){
                cout<<"  ";
            }
            else if (k<2*i+1)
            {
                if(k==0 || k+1 == 2*i+1 || i+1 == num){
                    cout<<"* ";
                }
                else cout<<"  ";

                k++;
            }
            else cout<<"  ";
            
        }
        cout<<endl;
    }
}