#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length or array=";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"enter the -"<<i<<"- item=";
        cin>>arr[i];
    }
    int f;
    cout<<"enter searching array=";
    cin>>f;

    for(int i=0; i<n; i++){
        //cout<<"ur -"<<i<<"array="<<arr[i]<<endl;
        if(arr[i]==f){
            cout<<"ur aray index is-"<<i<<endl;

        }else{
            cout<<"enfali"<<endl;
        }
          
    }
    
    return 0;

}