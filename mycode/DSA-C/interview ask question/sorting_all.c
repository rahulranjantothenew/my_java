#include<stdio.h>
void bubleshort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
   for(int i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
}

void selectionsort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    for(int i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
}
void insertionsort(int arr[],int n){
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
}
int main(){
    int n, temp, arr[25];
   printf("inter the length of array===: ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    printf("enter the index-%d=",i);
      scanf("%d",&arr[i]);
   }
   while(n!=0){
     printf("\n1.for bubule sort==");
   printf("\n2.for selection sort==");
   printf("\n3.for insersation sort==");
   printf("\n\t\tENTER YOUR RESPONCE===");
   int ch;
   scanf("%d",&ch);
   switch (ch)
   {
   case 1:
   bubleshort(arr,n);
    break;
   case 2:
   selectionsort(arr,n);
   break;
   case 3:
   insertionsort(arr,n);
   break;
   default:
   printf("\nINVALID INTER");
    break;
   }

   }
  
    return 0;
}