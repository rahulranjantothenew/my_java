#include<stdio.h>
void display(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
          printf(",");
    }
  
}
int r(int arr[],int size,int element,int index){
    if(index>=size){
        return -1;
        //printf("ur arry is too short");
    }else{
    for(int i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
}
int main(){
   // int arr[100]={7,8,12,27,85};
   int size;
   printf("enter the size of array=");
   scanf("%d",&size);
   int arr[100];
for(int i=0; i<size; i++){
    printf("inter the index-%d-",i);
    scanf("%d",&arr[i]);
}
int element;
printf("enter the element do u want to intset in the element=");
scanf("%d",&element);
int index;
printf("enter the index no where u are inset the index=");
scanf("%d",&index);

    display(arr,size);
    printf("\n");

    if(r(arr,size,element,index)==1){
        size +=1;
    printf("\n");
    printf("after the insertion\n");
    display(arr,size);

    }else{
        printf("sorry . your aray is too short");
    }
    
    
    return 0;
}