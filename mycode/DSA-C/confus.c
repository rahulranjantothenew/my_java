#include<stdio.h>
void sumoftwoarray(int arr1[],int arr2[],int arr3[],int n3){
  for(int j=n3-1; j>=0; j--){
    arr3[j]=arr1[j]+arr2[j];
    /*if(arr3[j]>=10){
        int rem=arr3[j]%10;
        int baki=arr3[2]/10;
        arr3[j]=rem;
        arr3[j+1]=arr3[j+1]+baki;
    } */
  }
}

void printarray(int arr3[],int n3){
    for(int i=0; i<n3; i++){
        printf(" ,%d",arr3[i]);
    }
}

    
int main(){
    int n1;
    int n3;
    int arr2[100];
    int arr3[30];
    printf("enter the length of array1==");
    scanf("%d",&n1);
    int arr1[100];
    for(int i=0; i<n1; i++){
        printf("enter the index==%d-",i);
        scanf("%d",&arr1[i]);
    }
    int n2;
    printf("enter the index of send array==");
    scanf("%d",&n2);
      n2=n2+2;
      int t=2;
        for(int j=t; j>n2; j++){
            printf("==%d-",t-3);
            scanf("%d",&arr2[j]);
        }
        for(int j=0; j<t; j++){
            arr2[j]=0;
        }
   n3=n1;
     sumoftwoarray(arr1,arr2,arr3,n3);
     printarray(arr3,n3);
    return 0;
}