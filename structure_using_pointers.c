#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    int rnum;
    char name[30];
}std;
int main(){
    std s, *ptr;
    ptr=&s;
    scanf("%d",&ptr -> rnum);
    fflush(stdin);
    gets(ptr->name);
    printf("%d\n",ptr->rnum);
    printf("%s",ptr->name);
    return 0;
}