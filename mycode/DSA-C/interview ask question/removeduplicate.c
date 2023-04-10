#include<stdio.h>
int main(){
    int arr[]={3,5,6,5,3,5,7,5,8,5,9,5,1,5,2,5};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<n; k++){
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(int l=0; l<n; l++){
        printf(" ");
        printf("%d",arr[l]);
    }
    return 0;
}