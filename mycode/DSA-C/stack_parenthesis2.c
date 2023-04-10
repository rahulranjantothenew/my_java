#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    char *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack *ptr,char val){
    if(isfull(ptr)){
        printf("\nyour stack is full\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
void pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("\nyour stack is empty\n");
    }else{
        char f=ptr->arr[ptr->top];
        ptr->top--;
    }
}
int parenth(char *prr){
    struct stack *sp;
    sp->size=20;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size * sizeof(char));
    for(int i=0; prr[i]!='\0'; i++){
     if(prr[i]=='('){
         push(sp,'(');
     }
     else if(prr[i]==')'){
         if(isempty(sp)){
             return 1;
         }else{
             pop(sp);
         }
     }

    }
   
if(isempty(sp)){
    return 1;
}else{
    return 0;
}
}
int main(){
    char *prr="(a+b)(";
    if(parenth(prr)){
        printf("\nyour parenthesis is matcing\n");
    }else{
        printf("\nyour parenthesis is not matching\n");
    }
    return 0;
}
