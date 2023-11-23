#include<stdio.h>
int binarysearch(int arr[],int ele){
    int n,i;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(ele>arr[mid]){
            start=mid+1;
        }
        else if(ele<arr[mid]){
            end=mid-1;
        }
        else{
            ele=mid;
        }
    }
    return -1;
}
int main(){
    int n,i,ele;
    scanf("%d",&n);
    scanf("%d",&ele);
    int arr[n];
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    if(binarysearch(arr,ele)){
        printf("element found");
    }
    else{
        printf("element not found");
    }
    return 0;
}