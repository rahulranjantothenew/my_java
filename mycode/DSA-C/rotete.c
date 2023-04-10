#include<stdio.h>
#include<conio.h>
void rotate(int arr[], int n)
{
    int temp=arr[n-1];
    for(int i=0; i<n-1; i++){
        arr[n-1-i]=arr[n-2-i];
        }
        arr[0]=temp;
        for(int i=0; i<5; i++){
            printf("%d",arr[i]);
            printf(" ");
        }
    
    
}
int main(){
    int arr[]={1,2,3,4,5};
    rotate(arr,5);
    return 0;
}
