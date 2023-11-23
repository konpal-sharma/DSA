#include<stdio.h>
#include<stdlib.h>
typedef struct linknode{
    int data;
    struct linknode *next; 
}node;
node *start, *temp, *last;
int count=0;
void create_node(){
    count++;
    temp=(node*)malloc(sizeof(node));
    printf("enter data: ");
    scanf("%d ",&temp->data);
    temp->next=NULL;
}
void insertfirst(){
    create_node();
    if(start==NULL){
        start=temp;
        last=temp;
    }
    else{
        temp->next=start;
        start=temp;
    }
}
void insertmid(){
    int pos;
    node *p;
    create_node();
    if(start==NULL){
        start=temp;
        last=temp;
    }
    else{
        printf("enter postion:");
        scanf("%d ",&pos);
        if(pos==count){
            last->next=temp;
            last=temp;
        }
        else if(pos<count){
            p=start;
            for(int i=1;i<pos-1;i++)
                p=p->next;
            temp->next=p->next;
            p->next=temp;
        }
        else{
            printf("not possible");
        }
    }
}
void insertlast(){
    create_node();
    if(start==NULL){
        start=temp;
        last=temp;
    }
    else{
        last->next=temp;
        last=temp;
    }
}
void display(){
    if(start==NULL)
       printf("underflow");
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
    printf("1. insert at first  2. insert at mid  3. insert at last  4. display");
    while(1){
        printf("\nenter choice: ");
        scanf("%d ",&n);
        switch(n){
            case 1: insertfirst(); break;
            case 2: insertmid(); break;
            case 3: insertlast(); break;
            case 4: display(); break;
            case 5: exit(0); break;
        }
    }
    return 0;
}