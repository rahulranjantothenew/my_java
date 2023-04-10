#include<stdio.h>
#include<stdlib.h>
struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *root=NULL;
int isempty(){
    if(root==NULL){
        return 1;
    }else{
        return 0;
    }
}
int isfull(){
    struct tree *p=(struct tree *)malloc(sizeof(struct tree));
    if(p==NULL){
        return 1;
    }else{
        return 0;
    }
}
intput 
void preorder(){

    
}
void travesal(){
    if(isempty()==1){
        printf("\nyour tree is empty");
    }else{
    struct tree *temp=root;
    printf("\t\t");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

    }

}
int main(){
   int ch,n;
   while(1){
    printf("\n1.for input");
    printf("\n2.traversal");
    printf("\n3.delete node");
    printf("\nenter yoru choice====");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
       printf("\nenter valude do you want to insert=");
       scanf("%d",&n);
        inputlinklist(n);
        break;
    case 2:
    travesal();
    break;
    default:
    printf("\ninvalid input");
        break;
    }
   }
    return 0;
}