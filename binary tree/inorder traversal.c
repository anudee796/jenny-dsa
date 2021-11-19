#include<stdio.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

int main(){
    struct node *root;
    root=create();
    printf("inorder is : ");
    inorder(root);
}
struct node* create(){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    int x;
    printf("enter the x\n");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("enter the left child of %d",x);
    newnode->left=create();
    printf("enter the right child of %d",x);
    newnode->right=create();
    return newnode;
}
void inorder(struct node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right); //preorder:root,left,right;
    //inorder:left,root,right
    //postorder:left,right,root
}
