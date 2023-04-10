#include<stdio.h>
void reversegroup(int arr[],int n,int k){
    if(k>n){
        printf("\nyour reversing input is longer then your array");
    }else{
         int d=k-1;
for(int i=0; i<k/2; i++){
    int temp=arr[i];
    arr[i]=arr[d];
    arr[d]=temp;
   d=d-1;
}
}
}
void displayarray(int arr[],int n,int k){
    if(k>n){
        printf("\nthe length of your array is=%d",n);
        printf("\nand your are input reversiong index value is =%d",k);
    }else{
        for(int j=0; j<n; j++){
        printf("%d ",arr[j]);
    }

    }
   
    
}
   
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int k;
    printf("\nenter the index value do you want to reverse==");
    scanf("%d",&k);
    printf("\nyour given array is==");
    displayarray(arr,n,k);
    reversegroup(arr,n,k);
    printf("\nafter the reversing of your array=");
    displayarray(arr,n,k);
    return 0;
}