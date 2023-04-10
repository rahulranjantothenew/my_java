#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    int temp;
    int arr[50];
    printf("enter the length of array =");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("enter =%d=index==",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                arr[j+1]=arr[j];
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("\nelement=%d",arr[i]);
    }
    return 0;
}