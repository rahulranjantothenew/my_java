#include<stdio.h>
int partation(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(arr[i]>=pivot){
            i++;
        }
        while(arr[j]<=pivot){
            j--;
        }
        if(i>j){
           temp=arr[j];
           arr[i]=arr[j];
           arr[j]=temp;
        }
    }while(i>j);
    temp=arr[low];
    arr[low]=arr[j];
    return j;

}
void quicksort(int arr[],int low,int high){
    int partision;
    if(low<high){
        partision=partation(arr,low,high);
        quicksort(arr,low,partision-1);
        quicksort(arr,partation+1,high);
    }
}
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d,",arr[i]);
    }
}
int main(){
    int arr[]={12,7,3};
    int n=sizeof(arr)/sizeof(int);
    quicksort(arr,0,n-1);
    partation(arr,0,n-1);
    printarray(arr,n);
    return 0;
}