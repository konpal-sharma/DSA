// this code has o(n) complexity
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct linknode{
//     int data;
//     struct linknode *next;
// }node;
// node *start, *temp;
// void create_list(){
//     temp=(node*)malloc(sizeof(node));
//     printf("Enter new value:");
//     scanf("%d",&temp->data);
//     temp->next= NULL;
//     if(start==NULL)
//        start=temp;
//     else{
//         node *ptr;
//         ptr=start;
//         while(ptr->next != NULL)
//            ptr=ptr->next;
//         ptr->next=temp;
//     }
// }
// void display(){
//     if(start==NULL)
//        printf("underflow");
//     else{
//         temp=start;
//         while(temp != NULL){   
//             printf("%d ",temp->data);
//             temp=temp->next;
//         }
//     }
// }
// int main(){
//     int n;
//     printf("enter\n 1. to insert new element\n 2. to print elements\n 3. to exit\n");
//     while(1){
//         printf("\nenter choice: ");
//         scanf("%d",&n);
//         switch(n){
//             case 1: create_list(); break;
//             case 2: display(); break;
//             case 3: exit(0);
//             default: printf("nice try\n"); break;
//         }
//     }
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
typedef struct linknode{
    int data;
    struct linknode *next;
}node;
node *start, *temp, *rear;
void create_list(){
    temp=(node*)malloc(sizeof(node));
    printf("enter new value: ");
    scanf("%d ",&temp->data);
    temp->next=NULL;
    if(start==NULL){
       start=temp;
       rear=temp;
    }   
    else{
        rear->next=temp;
        rear=temp;
    }
}
void display(){
    if(start==NULL)
       printf("\nUnderflow");
    else{
        temp=start;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    int n;
    printf("enter\n 1. to insert new element\n 2. to print elements\n 3. to exit\n");
    while(1){
        printf("\nenter choice: ");
        scanf("%d",&n);
        switch(n){
            case 1: create_list(); break;
            case 2: display(); break;
            case 3: exit(0);
            default: printf("nice try\n"); break;
        }
    }
    return 0;
}