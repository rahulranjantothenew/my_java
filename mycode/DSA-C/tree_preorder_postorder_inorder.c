#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct binary{
    int data;
    struct binary *left;
    struct binary *right;
};
struct binary *creatememory(int data){
    struct binary *n=(struct binary *)malloc(sizeof(struct binary));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void preorder(struct binary *root){
    if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);

    }
}

int main(){
    int ch;
    int d;
    int k;
    int arr[100];
    printf("\n1.for enter node");
    printf("\n2.for preorder");
    printf("\n3.for post order");
    printf("\n4.for inorder");
    printf("\n\tenter your responce==");
    scanf("%d",&ch);
        printf("enter how many node you are creationg=");
        scanf("%d",&k);
    switch (ch)
    {
    case 1:
        for(int i=0; i<k; i++){
            printf("\nenter the value=");
            scanf("%d",&d);
            arr[i]=creatememory(d);
        }
        break;
    case 2:
        for(int i=1; i<k; i++){
            if(i%2==0)
            arr[i]->right=arr[i+1];
            else{
                arr[i]->left=arr[i+1];
            }

        }
    default:
    printf("\ninvaild option");
        break;
    }
    return 0;
}