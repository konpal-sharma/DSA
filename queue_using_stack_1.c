#include<stdio.h>
int stack[50];
int queue[50];
int top=-1, top1=-1, count=0;
int front=-1, rear=-1;
void push(int x){
    if(top==49)
       printf("\nOverflow");
    else{
        top++;
        stack[top]=x;
    }
}
int pop(){
    if(top==-1)
       printf("\nUnderflow");
    else{
        int a=stack[top];
        top--;
        return a; 
    }    
}
void push1(int x){
    if(top1==49)
       printf("\noverflow");
    else{
        top1++;
        queue[top1]=x;
    }
}
int pop1(){
    if(top1==-1)
       printf("\nunderflow");
    else{
        int a=queue[top1];
        top1--;
        return a;
    }
}
void enqueue(int x){
    push(x);
    count++;
}
void dequeue(){
    if((top==-1)&&(top1==-1))
       printf("\nUnderflow");
    else{
        for(int i=0;i<=count;i++){
            int a=pop();
            push1(a);
        }
        int b=pop1();
        printf("the deleted element is %d\n",b);
        count--;
        for(int i=0;i<=count;i++){  
        int ele = pop1();  
        push1(ele);  
        } 
    }
}
void display(){
    for(int i=0;i<=top;i++)
        printf("%d",stack[i]); 
}
int main(){
   enqueue(10);  
   enqueue(20);  
   enqueue(30);  
   dequeue();  
   enqueue(40);  
   display(); 
}