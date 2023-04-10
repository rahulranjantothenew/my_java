#include<stdio.h>
void displayarray(int arr[],int n){
for(int i=0; i<n; i++){
    printf("%d",arr[i]);
    printf(",");
}
void r(int arr[],int n,int insert,int capacity,int indx){
  if(n >=capacity){
     printf("ur creating array is too short");
     //return -1;
  }
  else{
      for(int i=n-1; i>=indx; i--){
          arr[i+1]=arr[i];

      }
      arr[indx]=insert;
     // return 1;
  }
}
}
int main(){
    int n;
    printf("enter the length of array=");
    scanf("%d",&n);
    int arr[100];
    for(int i=0; i<n; i++){
        printf("enter-%d-",i);
        scanf("%d",&arr[i]);
    }
    int insert;
 printf("enter the insersation array=");
  scanf("%d",&insert);
  int indx;
  printf("enter the index do you want to insert=");
  scanf("%d",&indx);
    displayarray(arr,n);
    r(arr,n,insert,100,indx);
    n=n+1;
    printf("\n");
     displayarray(arr,n);
     return 0;
}