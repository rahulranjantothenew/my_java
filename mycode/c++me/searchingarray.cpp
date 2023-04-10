#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[n];
    cout<<"the length of arry=";
    cin>>n;
    for(int i=0; i<n; i++){
      cout<<i<<"-no enter=";
      cin>>arr[i];
    }
    int f;
    cout<<"enter the finding array=";
    cin>>f;
    for(int i=0; i<n; i++){
        if(arr[i]==f){
            cout<<"ur array index is="<<i<<endl;
            break;
            }else{
                cout<<"invailid finding item"<<endl; 

            }

        }
            
 
    
    return 0;
}