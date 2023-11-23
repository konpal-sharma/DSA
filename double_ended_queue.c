#include<stdio.h>
int queue[5];
int front=-1, rear=-1;
void fenqueue(){
    if((front==0 && rear==4) || rear+1==front)
       printf("\nOverflow");
    else if(front==-1 && rear==-1){
       front=rear=0;
       scanf("%d",&queue[front]);
    }
    else if(front==0){
        front=4;
        scanf("%d",&queue[front]);
    }
    else{
        front=(front+1)%5;
        scanf("%d",&queue[front]);
    }
}
void renqueue(){
    if((front==0 && rear==4) || rear+1==front)
       printf("\nOverflow");
    else if(front==-1 && rear==-1){
        rear=0;
        scanf("%d",&queue[rear]);
    }
    else if(rear==4){
        rear=0;
        scanf("%d",&queue[rear]);
    }
    else{
        rear=(rear+1)%5;
        scanf("%d",&queue[rear]);
    }
}
void fdequeue(){
    if(front==-1 && rear==-1)
       printf("\nUnderflow");
    else if(front==rear){
       front=-1;
       rear=-1;
    }
    else if(front==4)
        front=0;
    else{
        front=(front+1)%5;
    }
}
void rdequeue(){
    if(front==-1 && rear==-1)
       printf("\nUnderflow");
    else if(front==rear){
       front=-1;
       rear=-1;
    }
    else if(rear==0)
        rear=4;
    else{
        rear--;
    }//pointer adress arithmetic...robustness of code
    //runtime memory allocation
}
void display(){
    if(front==-1)
       printf("\nUnderflow");
    else{
        for(int i=front;i!=rear;i=(i+1)%5)
            printf("%d ",queue[i]);
    }
    printf("%d",queue[rear]);
}
int main(){
    int ch;
    while(1){
        printf("\n1 for fenqueue  2 for renqueue  3 for fdequeue  4 for rdequeue  5 for display  6 for exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            fenqueue();
            break;
            case 2:
            renqueue();
            break;
            case 3:
            fdequeue();
            break;
            case 4:
            rdequeue();
            break;
            case 5:
            display();
            break;
            case 6:
            printf("exit");
            break;
        }
    }
    return 0;
}