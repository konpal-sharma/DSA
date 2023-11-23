#include<stdio.h>
char stack[50];
int top=-1;
void push(char);
char pop();
char display();
int main(){
    char str[10]="(Konpal)";
    for(int i=0; str[i]!='\0';i++){
        push(str[i]);
    }
    display();
}
void push(char item){
    stack[++top]=item;
}
char pop(){
    return stack[top--];
}
char display(){
    if(top==-1)
       printf("underflow");
    else{
        for(int i=top;i>=0;i--){
            if(stack[i]=='(')
               stack[i]=')';
            else if(stack[i]==')')
                stack[i]='(';
            printf("%c",stack[i]);
        }     
    }
}