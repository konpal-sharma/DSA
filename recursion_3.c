#include<stdio.h>
void revarr(int arr[], int start, int end){
    int temp;
    if(start>=end)
       return ;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    revarr(arr, start+1, end-1);
}
int printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    printarray(arr, 5);
    revarr(arr, 0, 4);
    printf("\n");
    printarray(arr, 5);
    return 0;
}