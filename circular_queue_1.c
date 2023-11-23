#include<stdio.h>
#include<stdlib.h>      /////////
int queue[5];
int front=-1, rear=-1;
void enqueue(){
    if((front==0 && rear==4)||(rear+1==front))
        printf("\nOverflow");
    else{
        if(front==-1)            /////////////
            front=0;             /////////////

        rear=(rear+1)%5;
        scanf("%d",&queue[rear]);
    }
}
void dequeue(){
    if(front==-1)
       printf("\nUnderflow");
    else{
        if(front==rear)                    ////////// 
        {
            front=-1;                      ///////////
            rear=-1;                         ////////////
        }
        else                              ///////////
            front=(front+1)%5;
    }
}
void display(){
    if(front==-1)
       printf("\nUnderflow");
    else{
        for(int i=front;i!=rear;i=(i+1)%5)
            printf("%d ",queue[i]);
        printf("%d\n",queue[rear]);    //////////
    }
    // printf("%d",queue[rear]);
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
            case 4: //printf("exit");
            exit(0);            //////////////
            break;
        }
    }
    return 0;
}