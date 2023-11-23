#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("enter n:");
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int));
    // ptr=(int *)calloc(n, sizeof(int));
    // ptr=(int *)realloc(ptr, n*sizeof(int));
    for(int i=0; i<n; i++){
        printf("enter value for array: ");
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("the value at %d of array is %d\n",i,*(ptr+i));
    }
    free(ptr);
    return 0;
}