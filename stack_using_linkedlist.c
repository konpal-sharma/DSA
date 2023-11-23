#include<stdio.h>
#include<stdlib.h>
typedef struct linknode{
    int data;
    struct linknode *next;
}node;
node *top, *temp;
void push(){
    temp=(node*)malloc(sizeof(node));
    printf("enter data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(top==NULL)
       top=temp;
    else{
        temp=temp->next;
        top=temp;
    }
}
void pop(){
    if(top==NULL)
       printf("\nUnderflow");
    else{
        temp=top;
        top=top->next;
        free(temp);
        temp=NULL;
    }
}
void peek(){
    if(top==NULL)
       printf("\nUnderflow");
    else
       printf("%d",top->data);
}
void display(){
    if(top==NULL)
       printf("\nUnderflow");
    else{
        temp=top;
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    int n;
    while(1){
        printf("\n 1 for push  2 for pop  3 for peek  4 for display  5 for exit\n");
        scanf("%d",&n);
        switch(n){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            printf("nice try\n");
            break;
        }
    }
    return 0;
}