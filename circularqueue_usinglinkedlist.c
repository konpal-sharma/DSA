#include<stdio.h>
#include<stdlib.h>
typedef struct linknode{
    int data;
    struct linknode *next;
}node;
node *last, *temp;
void enqueue(){
    temp=(node*)malloc(sizeof(node));
    printf("enter data:");
    scanf("%d ",&temp->data);
    temp->next=NULL;
    if(last==NULL){
        last=temp;
        last->next=temp;
    }
    else{
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}
void dequeue(){
    if(last==NULL)
       printf("underflow");
    else if(last->next==last){
        free(last);
        last=NULL;
    }
    else{
        temp=last->next;
        last->next=temp->next;
        free(temp);
    }
}
void display(){
    if(last==NULL)
       printf("underflow");
    else{
        temp=last->next;
        while(temp!=last){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",last->data);
    }
}
int main(){
    int n;
    printf("1. enqueue   2. dequeue  3. display  4. exit");
    while(1){
        printf("enter choice: ");
        scanf("%d",&n);
        switch(n){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: exit(0);
        }
    }
    return 0;
}