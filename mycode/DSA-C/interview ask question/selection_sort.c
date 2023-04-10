#include<stdio.h>
void selection(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }

}
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
}
int main(){
    int arr[]={2,4,1,10,8,5,9,3,6,7};
    int n=sizeof(arr)/sizeof(int);
    printf("\n");
   printarray(arr,n);
    return 0;
}