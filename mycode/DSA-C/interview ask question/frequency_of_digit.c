#include<stdio.h>
int frequencyarray(int arr[],int n,int aff[]){
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                aff[j]=0;
            }
           
        }
        if(aff[i]!=0){
            aff[i]=count;
        }
    }
}
void printarray(int arr[],int n,int aff[]){
    for(int i=0; i<n; i++){
        if(aff[i]!=0){
            printf("\n%d-%d",arr[i],aff[i]);
        }
    }
}
int main(){
    int n;
    printf("enter the length of array==");
    scanf("%d",&n);
    int arr[20];
    int aff[20];
    for(int i=0; i<n; i++){
        printf("\nenter the =%d=index of=",i);
        scanf("%d",&arr[i]);
        aff[i]=-1;
    }
  frequencyarray(arr,n,aff);
  printarray(arr,n,aff);
    return 0;
}