#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
struct stack *s;
s->size=20;
s->top=-1;
s->arr=(int *)malloc(s->size*sizeof(int));
if(isempty(s)){
    printf("\nyour stack is empty\n");
}else{
    printf("\nyour stack is full");
}

    return 0;
}