#include<stdio.h>
int mostfrequency(int arr[],int n){
int count,tempcount=1,mval=arr[0],temp=0;
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            temp=arr[i];
            count=0;
            if(temp==arr[j]){
              count++;
              //val=arr[i];
            }
            if(tempcount<count){
                mval=temp;
                tempcount=count;

            }
        }
    }
    return mval;
}
int main(){
    int arr[]={3,9,2,8,4,9,5,8,7,8,3,8,8,8,8,8};
    int n=sizeof(arr)/sizeof(int);
    printf("\n==%d",mostfrequency(arr,n));

    return 0;
}