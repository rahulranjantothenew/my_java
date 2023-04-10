#include<stdio.h>
void sort(int arr[],int n){
    for(int j=0; j<n; j++){

    for(int i=0; i<n-1; i++){
      if(  arr[i]>arr[i+1]){
       int temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
      }
    }
    }
}
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
}
int searchelement(int arr[],int n,int k){
    int start=0,last=n-1,mid;
while(start<=last){
 mid=(start+last)/2;
if(arr[mid]==k){
    return mid;
}
if(arr[mid]<k){
    start=mid+1;
}else{
    last=mid-1;
}
}

}
int main(){
    int n;
    printf("enter the length of array==");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("index-%d-",i);
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printarray(arr,n);

    int k; 
    printf("\nenter the searching element==");
    scanf("%d",&k);
    if(arr[searchelement(arr,n,k)]==k){

    printf("\nthe index=%d",searchelement(arr,n,k));
    }else{
        printf("\nabsent");
    }
    return 0;
}