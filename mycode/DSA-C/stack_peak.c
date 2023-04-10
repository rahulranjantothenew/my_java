#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
void push(struct stack* ptr,int val){
    if(ptr->top=ptr->size-1){
       printf("\n\t\tyou are not push in your stack\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int peek(struct stack* sp,int i){
      int n=sp->top-i+1;
      if(n<0){
          printf("\nthis is not available");
          return -1;
      }else{
          return (sp->arr[n]);
      }

}
int main(){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=20;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size * sizeof(int));
    push(sp,2);
    //printf("\nyour pushing data is=%d",sp->top);
    for(int j=1; j<=sp->top+1; j++){
        printf("\nthe position of %d and valuse- %d",j ,peek(sp,j));
    }

    return 0;
}