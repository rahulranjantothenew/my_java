#include <stdio.h>
void merzearray(int arr[],int mid,int n){
    for(int i=mid;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j >=0 && arr[j]>arr[i]){
            arr[j+1]=arr[j];

            j--;
        }
        arr[j+1]=key;
    }
    for(int j=0; j<n; j++){
        printf(" %d",arr[j]);
    }
}

int main() {
    int arr[]={2,5,8,12,3,6,7,10};
    int n=sizeof(arr)/sizeof(int);
    merzearray(arr,4,n);
    return 0;
}