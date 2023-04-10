#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *sp){
    if(sp->top==-1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct stack *sp){
    if(sp->top==sp->size-1){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=20;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
     printf("%d",isempty(sp));
    return 0;
}