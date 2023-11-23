#include<stdio.h>
int main(){
    int arr[]={27, 39, 43, 9, 82, 10};
    int freq[10]={0};
    for(int i=0;i<=6;i++){
        while(arr[i]){
            freq[arr[i]%10]++;
            arr[i]/=10;
        }
    }
    for(int i=9;i>=0;i--){
        for(int j=arr[i];j>=0;j--){
            printf("%d",i);
        }
    }
    return 0;
}