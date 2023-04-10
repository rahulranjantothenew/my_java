#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack{
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
    if(ptr->top==ptr->size-1){    //glti
        return 1;

    }else{
        return 0;
    }
}
void push(struct stack *ptr,char val){
    if(isfull(ptr)){
        printf("\n\tyour stack is full in %d\n",val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("\n\tyour stack is empty\n");
       // return -1;
    }else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesis(char *exp){
    struct stack *sp;
    sp->size=20;
    sp->top=-1;
    sp->arr=(char *)malloc(sp->size * sizeof(char));
    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i]=='('){
            push(sp, '(');
        }
        else if(exp[i]==')'){
            if(isempty(sp)){
                return 0;
               // return 1;
            }
            else{
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
   // char *exp="((8)(* - - $ $ 9))";
    char *exp="(8+5)(";
    if(parenthesis(exp)){
        printf("\nparenthesis is matching\n");
    }else{
        printf("the parenthsis is not matching\n");
    }
    return 0;
}