#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
}
int deletation(int arr[],int n,int index,int cap){
    if(index>=n){
       // cout<<"ur array is too short";
       return -1;
    }else{
        for(int i=index; i<n-1; i++){
            arr[i]=arr[i+1];
        }
    
      return 1;
    }

}

int main(){
    int n;
    cout<<"enter the length of the array=";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cout<<"enter the index-"<<i<<"=";
        cin>>arr[i];
    }
    //int element;
    //cout<<"enter the element do u want to insert you=";
   // cin>>element;
    int index;
    cout<<"enter the index where do u want to delete the index=";
    cin>>index;
    display(arr,n);
if( deletation(arr,n,index,100)==1){
   
  cout<<"\n";
  cout<<"after the delatation the program\n";
  n=n-1;
  display(arr,n);

}else{
    cout<<"\n";
    cout<<"sorry .your array is tooo short";
}
    
    return 0;
}