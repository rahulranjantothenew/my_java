#include<stdio.h>
int popular=0;
int mxvalue(int arr[],int n){

     int mxv=arr[0];
     for(int j=1; j<n; j++){
        if(mxv<arr[j]){
         popular=arr[j];
        }else{
            popular=mxv;
        }
        mxv=popular;
     }

   return popular;
}
int main(){
    int arr[]={1009,12,90,140,40,4};
    int n=sizeof(arr)/sizeof(int);
    printf("the maximum elemetn =%d",mxvalue(arr,n));
    return 0;

}