#include<stdio.h>
#include<process.h>
void push();
void pop();
void peek();
void display();
int stack[50];
int top=-1;
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
}
void push(){
    if(top==50-1)
       printf("overflow\n");
    else{
        top++;
        scanf("%d",&stack[top]);
    }
}
void pop(){
    if(top==-1)
       printf("underflow\n");
    else{
        top--;
    }
}
void peek(){
    if(top==-1)
       printf("underflow\n");
    else{
        printf("%d\n",stack[top]);
    }
}
void display(){
    if(top==-1)
       printf("underflow\n");
    else{
        for(int i=top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}
