#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,1,3,2,1,2,4,1,2,4,2};
    int n=sizeof(arr)/sizeof(int);
    int lowerst=n,height1=1,temp=1,temp1=1;
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1){
        if(count>height1){
            height1=count;
            temp=i;
        }else if(lowerst>count){
            lowerst=count;
            temp1=i;
        }
        }
    }
   cout<<"most frequecy is="<<arr[temp]<<"=="<<height1<<endl;
   cout<<"smollest frequency is=="<<arr[temp1]<<"=="<<lowerst;
    return 0;
}