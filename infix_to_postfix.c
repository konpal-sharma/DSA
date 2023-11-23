#include<stdio.h>
#include<ctype.h>
char stack[50];
int top=-1;
int precedence(char);
void push(char);
char pop();
int main(){
    char str[20]="(A + B) / (C - D * E)",x;
    for(int i=0;str[i]!='\0';i++){
        if(isalpha(str[i]))
           printf("%c", str[i]);
        else if(str[i]=='(')
            push(str[i]);
        else if(str[i]==')'){
            while((x=pop())!='(')
                printf("%c",x);
        }
        else{
            while(precedence(stack[top])>=precedence(str[i]))
                printf("%c",pop());
            push(str[i]);
        }
    }
    while(top>-1){
        printf("%c",pop());
    }
}
int precedence(char symbol){
    if(symbol=='^')
       return 3;
    else if(symbol=='*'||symbol=='/')
        return 2;
    else if(symbol=='+'||symbol=='-')
        return 1;
    else
        return 0;
}
void push(char item){
    stack[++top]=item;
}
char pop(){
    return stack[top--];
}