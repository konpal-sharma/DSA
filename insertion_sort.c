#include<stdio.h>
// void swap(int *x, int *y){
//     int temp=*x;
//     *x=*y;
//     *y=*x;
// }
void insertionsort(int arr[], int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionsort(arr, n);
    printf("sorted array:\n");
    printarray(arr, n);
    return 0;
}