// #include<stdio.h>
// int nsum(int n){
//     if(n==1)
//        return 1;
//     return (n+nsum(n-1));
// }
// int main(){
//     int n=5, ans;
//     ans=nsum(n);
//     printf("%d",ans);
//     return 0;
// }
#include<stdio.h>
int nums(int n){
    if(n<=50){
        printf("%d ",n);
    }
    nums(n+1);
}
int main(){
    int n=1, ans;
    ans=nums(n);
    return 0;
}