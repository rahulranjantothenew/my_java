#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter the length of arry=");
    scanf("%d",&n);
    int arr[n];
    for(int i=1; i<=n; i++){
        printf("etner the endex of=%d=",i-1);
        scanf("%d",&arr[i]);
    }
    int temp=arr[n];
    arr[0]=temp;
    for(int i=0; i<n; i++){
        printf("\nyr transform arry is =%d",arr[i]);
    }
    return 0;
}