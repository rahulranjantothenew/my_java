#include<stdio.h>
void sortarray(int arr[],int n){
 for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    }

 }
}
void display(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
int equelornot(int arr1[],int arr2[],int n){
    for(int k=0; k<n; k++){
        while(arr1[k]!=arr2[k]){
            return 1;
            break;
        }
    }
    
}
int main(){
    int arr1[]={7,5,4,6,9,1};
    int arr2[]={9,6,7,5,4,11};
    int n,n1;
    n=(sizeof(arr1)/sizeof(int));
    n1=(sizeof(arr2)/sizeof(int));
    sortarray(arr1,n);
    sortarray(arr2,n1);
    if(equelornot(arr1,arr2,n)==1){
        printf("\n\t\tyour both array are not same");
    }else{
        printf("\n\t\tyour array are  same");
    }
   
    return 0;
}