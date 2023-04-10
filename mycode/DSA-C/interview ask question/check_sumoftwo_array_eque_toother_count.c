#include<stdio.h>
int count=0;
int countcheck(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
        int k=0;
            if(i==j){
                continue;
            }
           
            while(k<n){
            if(arr[i]+arr[j]==arr[k]){
                count++;
            }
               k++;
            }
        }

    }
    return count;
}
int main(){
    int n;
    int arr[20];
    printf("enter the length of your array= ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("inter the index-%d-",i);
        scanf("%d",&arr[i]);
    }
    printf("=============================%d",countcheck(arr,n));
    return 0;
}