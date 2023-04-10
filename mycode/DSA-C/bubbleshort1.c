#include<stdio.h>
int main(){
    int arr[]={12,10,200,14,55};
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        for(int k=0; k<sizeof(arr)/sizeof(int)-1-i; k++){

        if(arr[k]>arr[k+1]){
        int temp=arr[k];
        arr[k]=arr[k+1];
        arr[k+1]=temp;
        }
        }
        
    }
    for(int j=0; j<sizeof(arr)/sizeof(int); j++){
        printf("%d,",arr[j]);

    }
    return 0;

}