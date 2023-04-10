#include<stdio.h>
void sumoftwoarray(int arr1[],int arr2[],int arr3[],int n3){
    int carry=0;
  for(int j=n3-1; j>=0; j--){
    arr3[j]=arr1[j]+arr2[j]+carry;
    carry=0;
    if(arr3[j]>=10 && j!=0){
        int rem=arr3[j] % 10;
        carry=arr3[j] / 10;
        arr3[j]=rem;
    } 
  }
}
void printarray(int arr3[],int n3){
    for(int i=0; i<n3; i++){
        printf(" %d",arr3[i]);
    }
}
int main(){
    int n1,n3;
    int arr2[30];
    int arr3[30];
    printf("*.ENTER THE LENGTH OF FRIST ARRAY==");
    scanf("%d",&n1);
     int n2;
    printf("*.ENTER THE LENGTH OF SECOND ARRAY==");
   scanf("%d",&n2);
    int arr1[n1];
    if(n1<n2){
        int t=n2-n1;
        n1=n1+t;
        printf("inter all frist array\n");
        for(int j=n1-1; j>=t; j--){
            printf("==");
            scanf("%d",&arr1[j]);
        }
        for(int j=0; j<t; j++){
            arr1[j]=0;
        }
    }else{
  printf("inter all frist array\n");
    for(int i=0; i<n1; i++){
        printf("==");
        scanf("%d",&arr1[i]);
    }
    }
    if(n1>n2){
        int t=n1-n2;
        n2=n2+t;
        printf("inter all second array\n");
        for(int j=t; j<n2; j++){
            printf("==");
            scanf("%d",&arr2[j]);
        }
        for(int j=0; j<t; j++){
            arr2[j]=0;
        }
    }else{
        printf("inter all second array\n");
        for(int i=0; i<n2; i++){
             printf("==");
                scanf("%d",&arr2[i]);
        }

    }
    if(n1>n2){
        n3=n1;
    }else{
        n3=n2;
    }
 sumoftwoarray(arr1,arr2,arr3,n3);
 printarray(arr3,n3);
    return 0;
}