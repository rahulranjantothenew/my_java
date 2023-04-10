#include<stdio.h>
void reverseofarray(int arr[],int arr2[],int n){
 for(int i=0; i<n; i++){
    arr2[i]=arr[i]+arr[n-1-i];
 }
 for(int i=0; i<n-1; i++){
    if(arr2[i]>=10){
        int r=arr2[i]%10;
        int baki=arr2[i]/10;
        arr2[i]=r;
        arr2[i+1]+=baki;
    }
 }
}
void printarray(int arr2[],int n){
    for(int i=n-1; i>=0; i--){
        printf(" %d",arr2[i]);
    }
}
int main(){
    int n; 
    int arr[20],arr2[20];
    printf("enter the length of array=");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf(" nenter the index-%d-",i);
        scanf("%d",&arr[i]);
    }
    reverseofarray(arr,arr2,n);
    printarray(arr2,n);
    return 0;
}