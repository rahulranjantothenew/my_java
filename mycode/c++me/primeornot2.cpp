#include<iostream>
using namespace std;
int main(){
    int n;
   
    cout<<"enter any digit to check prime or not=";
    cin>>n;
     int i;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
           break;
        }
    }
     if(i==n){
        cout<<"prime no"<<endl;
    }
    
    return 0;
}