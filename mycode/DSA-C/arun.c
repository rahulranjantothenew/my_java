#include<stdio.h>
void frequencyarray(int arr[],int n,int arr1[]){
    for(int i=0; i<n-1; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                arr1[j]=-1;
            }
        }
        if(arr1[i]!=-1){
            arr1[i]=count;
        }
    }
}
void printarray(int arr[],int n,int arr1[]){
    for(int i=0; i<n; i++){
        if(arr1[i]!=-1){
            printf("\n%d-%d",arr[i],arr1[i]);
        }
    }
}
int main(){
    int n; 
    int arr[20],arr1[20];
    printf("enter length of array=");
    scanf("%d",&n);
    for(int i=0; i<n; i++){

    printf("\nenter the index of=%d-",i);
    scanf("%d",&arr[i]);
    }
    frequencyarray(arr,n,arr1);
    printarray(arr,n,arr1);

    return 0;
}