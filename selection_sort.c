#include<stdio.h>
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i <=n; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;
           if(min != i)
            swap(&arr[i], &arr[min]);
    }
//     int min;
//     min=arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i]<min){
//            min=i;
//            swap(&arr[i], &arr[min]);
//         }
//     } 
}
void printarray(int arr[], int n){
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printarray(arr, n);
    return 0;
}