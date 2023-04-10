#include<iostream>
using namespace std;
void betweenprine(int f1,int f2){
    int t=f1;
    while(t<f2){
    int c=0;
    for(int i=2; i*i<=f2; i++){
       if(t%i==0){
        c=1;
        break;
       }
    }
       if(c!=1){
        cout<<t<<" ";
       }
       t++;
    }
}
int main(){
    int f1,f2;
    cout<<"enter frist digit==";
    cin>>f1;
    cout<<"enter second no==";
    cin>>f2;
    betweenprine(f1,f2);

    return 0;
}