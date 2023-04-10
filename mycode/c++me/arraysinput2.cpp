#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array length=";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"enter-"<<i<<"-array=";
        cin>>arr[i];
    }
    //if you want to change the value of array
    arr[2]=44;
    for(int i=0; i<n; i++){
        cout<<"ur-"<<i<<"is="<<arr[i]<<endl;
    }
    return 0;
}