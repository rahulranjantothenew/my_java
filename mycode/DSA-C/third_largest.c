#include<stdio.h>
int largestindx(int arr[],int n){
    int indx=0,temp=arr[0];
    for(int i=1; i<n; i++){
        if(temp<arr[i]){
            temp=arr[i];
            indx=i;
        }
    }
    return indx;
}
void removelargest(int arr[],int n){
    int p=largestindx(arr,n);
    for(int j=p; j<n-1; j++){
        arr[j]=arr[j+1];
    } 
}
int main(){
    int arr[]={8,1,9,3,6,5,20,21,22};
    int n=sizeof(arr)/sizeof(int);
    removelargest(arr,n);
    removelargest(arr,n-1);
   // removelargest(arr,n-2);
   printf("%d",arr[largestindx(arr,n-2)]);
    return 0;
}