#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack{
    int size;
    int top;
    int *arr;
};
void init(struct stack *s, int size){
    s->size=size;
    s->top=-1;
    s->arr=(int *)malloc(size *sizeof(int));
}
int isempty(struct stack* ptr){
    if(ptr->top ==-1){
        return 1;
    }
    else{
        return 0;
    
    }
}
int isfull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else {
        return 0;
    }
} 


int main(){
    struct stack s;
    init(&s,20);
    //s->arr[0]=4;
    //s->top++;
    if(isempty(&s)){
        printf("your stack is empty\n");
    }else{
        printf("your stack is not empty\n");
    }
    

    
    return 0;
}
