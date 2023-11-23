#include<stdio.h>
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, max;
    for (i = 0; i < n-1; i++)
    {
        max = i;
        for (j = i+1; j < n; j++)
          if (arr[j] > arr[max])
            max = j;
           if(max != i)
            swap(&arr[i], &arr[max]);
    }
}
int main(){
    int a[12],i,j,count=1;
    int n=6,m=12;
    int arr[]={27, 39, 43, 9, 82, 10};
    for(i=0, j=0;i<n,j<m;i++,j=j+2){
        a[j]=arr[i]%10;
        a[j+1]=arr[i]/10;
        if(arr[i]/10==0)
           count++;
    }
    selectionSort(a, m);
    for(int i=0;i<=12-count;i++){
        printf("%d ",a[i]);
    }
    return 0;
}    