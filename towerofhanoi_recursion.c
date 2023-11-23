#include<stdio.h>
void TOH(int n, char A, char B, char C){
    if(n>0){
        TOH((n-1),A,C,B);
        printf("%c->%c\n",A,C);
        TOH((n-1),B,A,C);
    }
}
int main(){
    int n=3;
    char A='A', B='B', C='C';
    TOH(n, A, B, C);
    return 0;
}