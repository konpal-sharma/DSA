#include<stdio.h>
int check(int arr[], int x, int n){
    int high=n-1;
    int low=0;
    for(int i=low;i<high;i++){
        if(arr[high]+arr[low]==x)
           return 1;
        if(arr[high]+arr[low]>x)
           high--;
        if(arr[high]+arr[low]<x)
           low++;
    }
}
int main(){
    int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=check(arr, x, n);
    if(c==1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}