#include<iostream>
using namespace std;
void spardha(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<" *";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"ener the size of==";
    cin>>n;
    spardha(n);
    return 0;
}