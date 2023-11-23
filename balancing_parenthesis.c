#include<stdio.h>
int top=-1;
char stack[50];
void push(char);
char pop();
int main(){
    char exp[50]="{(A+B)-C*D}";
    int x=0;
    for(int i=0; exp[i]!='\0';i++){
        if(exp[i]=='{'||exp[i]=='['||exp[i]=='(')
           push(exp[i]);
        else if(exp[i]=='}'||exp[i]==']'||exp[i]==')'){
            if(top==-1)
               x=1;
            else{
                char var=pop();
                if(var=='{'&&exp[i]!='}')
                   x=1;
                else if(var=='['&&exp[i]!=']')
                    x=1;
                else if(var=='('&&exp[i]!=')')
                    x=1;
            }
        }
    }
    if(x==1)
       printf("not balanced");
    else
       printf("balanced");
}
void push(char item){
    stack[++top]=item;
}
char pop(){
    return stack[top--];
}