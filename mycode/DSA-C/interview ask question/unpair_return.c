#include<stdio.h>
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
}
int main(){
    int n;
    int arr[100];
    printf("enter the length of array=");
    scanf("%d",&n);
    for(int i=0; i<n/2; i++){
        int a;
     printf("\ninter in index=%d=",i);
     scanf("%d",&a);
     while(a%2==0){
         printf("\ninter in index=%d=",i);
         scanf("%d",&a);

        }
        arr[i]=arr[i+2]=a;

    }
    printarray(arr,n);
    return 0;
}