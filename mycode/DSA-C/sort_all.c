#include<stdio.h>
#include<conio.h>
void inputarr(int *arr,int n){
    for(int i=0; i<n; i++){
        printf("enter =%d=index==",i);
        scanf("%d",&arr[i]);
    }
}
void printarray(int *arr,int n){
    for(int i=0; i<n; i++){
        printf("\n\t\telement==%d",arr[i]);
    }
}
void bubbleshort(int *arr,int n){
    int temp;
     for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void insertion(int *arr,int n){
   
    for(int i=1; i<=n-1; i++){
        int key =arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;
    }
}
void selection(int *arr,int n){
    for(int i=0; i<n; i++){
     int min=i;
        for(int j=i+1; j<n; j++){
        if(arr[min]>arr[j]){
            min=j;
        }
        }
         int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }
}
int main(){
    int ch;
    int n;
    int arr[50];
     printf("enter the length of array=");
            scanf("%d",&n);
    while(1){
        printf("\n1.for input and  lenthg of array\n");
        printf("2.for display\n");
        printf("3.for exit\n");
        printf("4.for bubble short\n");
        printf("5.for insertion short\n");
        printf("6.for selection sort");
        printf("enter your responce==");
        scanf("%d",&ch);
        
        switch (ch)
        {
            
        case 1:
            inputarr(arr,n);

            break;
            case 2:
           // bubbleshort(arr,n);
            printarray(arr,n);
            break;
            case 3:
            exit(0);
            break;

            case 4:
            bubbleshort(arr,n);
             printarray(arr,n);
            break;
            case 5:
            insertion(arr,n);
             printarray(arr,n);
            break;
            case 6:
            selection(arr,n);
             printarray(arr,n);
            break;
        default:
        printf("Invilid opton you are chosing\n");
            break;
        }
    }
    return 0;
}