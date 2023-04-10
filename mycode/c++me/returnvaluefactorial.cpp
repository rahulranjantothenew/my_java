#include<iostream>
using namespace std;
int fact(int n){
   int temp=1;
     for(int i=1; i<=n; i++){
        temp=temp*i;
    } 
    return temp;
}
int main(){
    int n;
    cout<<"enter no=";
    cin>>n;
    
      
    cout<<"factoril of ur no="<<fact(n);
    return 0;
}