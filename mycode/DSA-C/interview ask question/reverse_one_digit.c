#include<stdio.h>
void replacearray(int arr[],int n){
    for(int i=0; i<n-1; i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
void display(int arr[],int n){
    for(int j=0; j<n; j++){
       printf(" %d",arr[j]);
    }
}
int main(){
    int n;
    printf("enter length==");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
    printf("enter ==%d==",i);
    scanf("%d",&arr[i]);
    }
    replacearray(arr,n);
    display(arr,n);
}