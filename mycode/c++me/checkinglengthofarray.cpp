#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array=";
    cin>>n;
    int arr[n];
   for(int i=0; i<n; i++){
        cout<<"enter"<<i<<"array=";
        cin>>arr[i];
    } 
    int maxno = INT_MIN;
    int minno = INT_MAX;
    for(int i=0; i<n; i++){
        //cout<<"ur "<<i <<"is="<<arr[i]<<endl;
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);

    }
    cout<<maxno<<" max "<<endl;
    cout<<minno<<" min"<<endl;
    return 0;
}