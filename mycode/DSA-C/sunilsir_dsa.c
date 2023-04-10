#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node NODE;
NODE *root=NULL;
NODE *insert(NODE *,int);
NODE *delet(NODE *);
void preorder(NODE *);
void inorder(NODE *);
void postorder(NODE *);



NODE *insert(NODE *root,int key){
    NODE *n=(NODE*)malloc(sizeof(NODE));
    n->data=key;
    n->left=NULL;
    n->right=NULL;
    if(root==NULL){
        return n;
    }
if(key < root->data){
    root->left=insert(root->left,key);
}else{
    root->right=insert(root->right,key);
}
return n;
}
