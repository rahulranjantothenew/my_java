#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct prenode{
    int data;
    struct prenode *left;
    struct prenode *right;
};
struct prenode *creatememory(int data){
struct prenode *n=(struct prenode *)malloc(sizeof(struct prenode));
n->data=data;
n->left=NULL;
n->right=NULL;
return n;
}
void preorder(struct prenode *root){
    if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    int ch;
    int n;
    int arr[100];
    int arr1[100];
    while(1){
        printf("\n1.for input node");
        printf("\n2.for preorder");
        printf("\n3.for postorder");
        printf("\n4.for inorder");
        printf("\n\t\tenter your responce===");
        scanf("%d",&ch);
            printf("enter how many node do you want to create=");
            scanf("%d",&n);
        switch(ch){
            case 1:
            for(int i=0; i<n; i++){
            struct prenode *arr1[i]=creatememory(arr[i]);
            }
            break;
            case 2:
            for(int i=0; i<n-1; i++){
                if(i%2!=0){
            arr1[i]->left=arr1[i+1];
                }else{
                    arr1[i]=arr1[i+1];
                }

            }
             preorder(arr1[0]);

            break;
            default:
            printf("\ninvalid option please contect rahul ranjan");
            break;
        }
    }
    return 0;
}