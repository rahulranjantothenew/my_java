#include<conio.h>

void display(int arr[],int size){
    for(int i=0; i<size; i++){
        printf("%d",arr[i]);
        printf(",");
    }
}
void insert1(int arr[],int size,int element,int cap,int index){
    if(index >=cap){
        printf("ur array is too short");
    }else{
        for(int i=size-1; i>=index; i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
    }

}
int main(){
    int arr[100]={1,2,3,4,5};
  int size=5,element=40,index=3;
    display(arr,size);
    insert1( arr,size,element,100,index);
    size +=1;
    printf("\n");
    display(arr,size);
    return 0;

}