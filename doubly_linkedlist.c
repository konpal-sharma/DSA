#include<stdio.h>
#include<stdlib.h>
typedef struct linknode{
    struct linknode *prev;
    int data;
    struct linknode *next;
}node;
node *start, *rear, *temp;
void create_node(){
    temp=(node*)malloc(sizeof(node));
    printf("enter data: ");
    scanf("%d ",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
    if(start==NULL){
        start=rear=temp;
    }
    else{
        rear->next=temp;
        temp->prev=rear;
        rear=temp;
    }
}
void display_forward(){
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
void display_backward(){
    if(start==NULL)
       printf("\nUnderflow");
    else{
        temp=rear;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->prev;
        }
    }
}
int main(){
    int n;
    printf("1. insertion  2. display forward  3. display backward  4. exit");
    while(1){
        printf("\nenter choice: ");
        scanf("%d",&n);
        switch(n){
            case 1: create_node(); break;
            case 2: display_forward(); break;
            case 3: display_backward(); break;
            case 4: exit(0); 
        }
    }
    return 0;
}