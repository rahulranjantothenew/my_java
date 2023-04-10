#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter factorila digit do u want to calculate=";
    cin>>n;
    int fac=1;
    for(int i=1; i<=n; i++){
     fac=fac*i;
     

    }
    cout<<"factoril of ur no="<<fac<<endl;
    return 0;
}