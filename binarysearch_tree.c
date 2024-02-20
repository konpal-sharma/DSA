#include<stdio.h>
#include<stdlib.h>
#include<process.h>
typedef struct treenode{
    struct treenode *l;
    int data;
    struct treenode *r;
}node;
node *temp, *root;
void create_tree(){
    temp=(node*)malloc(sizeof(node));
    printf("enter the data: ");
    scanf("%d",&temp->data);
    temp->l==NULL;
    temp->r==NULL;
    if(root==NULL)
       root=temp;
    else{
        node *p, *q;
        p=root;
        while(p!=NULL){
            if(p->data>temp->data){
                q=p;
                p=p->l;
            }
            else{
                q=p;
                p=p->r;
            }   
        }
        if(q->data>temp->data)
           q->l=temp;
        else
           q->r=temp;
    }
}
void preorder(node *root){
    if(root!=NULL){
       printf(" %d",root->data);
       preorder(root->l);
       preorder(root->r);
    }
}
void inorder(node *root){
    if(root!=NULL){
        inorder(root->l);
        printf(" %d",root->data);
        inorder(root->r);
    }
}
void postorder(node *root){
    if(root!=NULL){
        postorder(root->l);
        postorder(root->r);
        printf(" %d",root->data);
    }
}
int main(){
    int n;
    while(1){
        printf("\nenter choice: ");
        scanf("%d",&n);
        switch(n){
            case 1:create_tree(); break;
            case 2:preorder(root); break;
            case 3:inorder(root); break;
            case 4:postorder(root); break;
            case 5:exit(0); break;
        }
    }
    return 0;
}