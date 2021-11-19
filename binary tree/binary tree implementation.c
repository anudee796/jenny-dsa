#include<stdio.h>
#include<stdlib.h>
struct node* create();
struct node{ //userdefined datatype
    int data;
    struct node *left;
    struct node *right;
}
void main(){
    struct node *root; //userdefined datatype variable
    root=create();
    //return 0;
}


struct node* create(){
    int x;
    struct node *newnode; //userdefined datatype var
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("enter the left child of %d",x);
    newnode->left=create();
    printf("enter the left child of %d",x);
    newnode->right=create();
    return newnode;
}
