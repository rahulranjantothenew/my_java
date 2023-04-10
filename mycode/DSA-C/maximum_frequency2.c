#include<stdio.h>
int mxcount=1;
int popular;
int mxfrequncy(int arr[],int n){
    for(int i=0; i<n; i++){
        int temp=arr[i];
        int count=1;
        for(int j=1; j<n; j++){
            if(temp==arr[j]){
                count++;
            }
            if(mxcount<count){
            popular=arr[j];
            mxcount=count;
            }
           
        }
    }
    return popular;
}
int main(){
    int arr[]={4,5,4};
    int n=sizeof(arr)/sizeof(int);
    printf("maximum frequency of element =%d",mxfrequncy(arr,n));
    return 0;
}