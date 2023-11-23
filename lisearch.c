#include<stdio.h>
int main(){
    int arr[20],n,x,i;
    printf("enter number of elements in array:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter element to search:");
    scanf("%d",&x);
    for(i=0;i<n;++i)
        if(arr[i]==x)
        break;
    if(i<n)
        printf("the number is found at the index %d",i);
    else
        printf("element not found");
    
    return 0;
    

}