#include<stdio.h>
#include<stdlib.h>
struct student{
    int rnum;
    char name[30];
};
int main(){
    struct student *ptr;
    ptr=(struct student*)malloc(sizeof(struct student));
    scanf("%d",&ptr->rnum);
    fflush(stdin);
    gets(ptr->name);
    printf("rnum of the person is %d\n",ptr->rnum);
    printf("name of the person is %s\n",ptr->name);
    return 0;
}