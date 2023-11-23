#include<stdio.h>
#include<stdlib.h>
typedef struct linknode{
    int data;
    struct linknode *next;
}node;
node *front, *rear, *temp;
void enqueue(){
    temp=(node*)malloc(sizeof(node));
    printf("enter data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(rear==NULL){
        front=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }   
}
void dequeue(){
    if(front==NULL)
       printf("Underflow");
    else if(front==rear){
        temp=front;
        free(temp);
        front=rear=NULL;
    }
    else{
        temp=front;
        front=front->next;
        free(temp);
        temp=NULL;
    }
}
void display(){
    if(front==NULL)
       printf("Underflow");
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    int ch;
    while(1){
        printf("\n1 for enqueue  2 for dequeue  3 for display  4 for exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: printf("exit");
            break;
        }
    }
    return 0;
}