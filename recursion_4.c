#include<stdio.h>
int fibo(int n){
    if(n==1)
       return 1;
    int ft=0,st=1,nt;
    nt=ft+st;
    return fibo(nt-1) +fibo(nt-2);
}
int main(){
    int n=10;
    fibo(n);
    return 0;
}