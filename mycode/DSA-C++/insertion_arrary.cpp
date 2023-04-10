#include<iostream>
using namespace std;
void display(int arr[],int n){
 for(int i=0; i<n; i++){
     cout<<arr[i]<<",";
 }
}
int insert1(int arr[],int n,int element,int index){
    if(index >=n){
        //cout<<"ur array is too sort";
        return -1;
        
    }else{
        for(int i=n-1; i>=index; i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;
    }

}
int main(){
    int n;
    cout<<"enter the length or array=";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cout<<"enter the -"<<i<<"-index=";
        cin>>arr[i];
    }
   
    int element;
    cout<<"enter the insert of array element=";
    cin>>element;
    int index;
    cout<<"enter the index where do u want to endex=";
    cin>>index;
    
 display(arr,n);
    //insert1(arr,n,element,index);
    
    if( insert1(arr,n,element,index)==1){
         
         cout<<"\n";
         cout<<"************************************************"<<endl;
          cout<<"\n";
         n +=1;
    display(arr,n);
    }else{
        cout<<"ur array is too short";
        
    }
    

    return 0;
    
}