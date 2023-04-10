#include<iostream>
using namespace std;
int pivotesearch(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1,j=high;
    do{
        while(pivot>=arr[i]){
        i++;
      }
      while(pivot<arr[j]){
        j--;
      }
      if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }

    } while(i<j);
    int temp1=arr[low];
    arr[low]=arr[j];
    arr[j]=temp1;
    return j;
}
void quicksort(int arr[],int low,int high){
    int patationindex;
    if(low<high){
        patationindex=pivotesearch(arr,low,high);
        quicksort(arr,low,patationindex-1);
        quicksort(arr,patationindex+1,high);
    }
}
void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={3,1,6,4,2,9,11,0};
    int n=sizeof(arr)/sizeof(int);
    quicksort(arr,0,n-1);
    display(arr,n);
    return 0;
}