#include<stdio.h>
#include<stdlib.h>
typedef struct linknode{
    int data;
    struct linknode *next;
}node;
node *start, *temp, *rear;
void create_node(){
    temp=(node *)malloc(sizeof(node));
    printf("enter new value: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL){
        start=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
node *prev, *curr, *new;
void reversal(){
    prev=NULL;
    curr=start;
    new=NULL;
    while(curr!=NULL){
        new=curr->next;
        curr->next=prev;
        prev=curr;
        curr=new;
    }
    start=prev;
}
void display(){
    if(start==NULL)
       printf("\nUnderflow");
    else{
        temp=start;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    int n;
    while(1){
        printf("\nenter\n 1. to insert new element\n 2. to print elements\n 3. to exit\n");
        scanf("%d",&n);
        switch(n){
            case 1: {
                create_node();  
                break;
            }
            case 2:{
                 reversal(); 
                 display(); 
                 break;
            }
            case 3: exit(0);
            default: printf("nice try\n"); break;
        }
    }
    return 0;
}
