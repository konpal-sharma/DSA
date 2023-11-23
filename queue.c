#include<stdio.h>
int queue[50];
int rear=-1, front=-1;
void enqueue(){
    if(rear==49)
       printf("\nOverflow");
    else{
        if(rear==-1){
            rear++;
            front++;
        }
        else
           rear++;
        scanf("%d",&queue[rear]);
    }
}
void dequeue(){
    if(front==-1)
       printf("\nUnderflow");
    else{
        printf("element to be deleted: %d",queue[front]);
        front++;
    } 
    if(front>rear){
        front=-1;
        rear=-1;
    }
}
void display(){
    if(front==-1)
       printf("\nUnderflow");
    else{
        for(int i=front;i<=rear;i++)
            printf("%d\n",queue[i]);
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