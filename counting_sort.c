#include<stdio.h>
void countsort(int arr[], int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
           max=arr[i];
    }
    int countarr[10];
    for(int i=0;i<=max+1;i++)
        countarr[i]=0;
    for(int i=0;i<n;i++)
        countarr[arr[i]]++;
    for(int i=1;i<=max;i++)
        countarr[i] += countarr[i-1];

    int outputarr[10];
    for(int i=n-1;i>-1;i--){
        outputarr[countarr[arr[i]]-1]=arr[i];
        countarr[arr[i]]--;
    }
    for(int i=0;i<n;i++)
       arr[i]=outputarr[i];
}
void printarray(int arr[], int size){
    for(int i=0; i<size; i++)
       printf("%d ",arr[i]);
    printf("\n");
}
int main(){
    int array[]={2,3,5,5,0,4};
    int length=sizeof(array)/sizeof(array[0]);
    countsort(array, length);
    printarray(array, length);
}