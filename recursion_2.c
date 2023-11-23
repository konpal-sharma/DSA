#include<stdio.h>
int nsum(int n){
    if(n==1)
       return 1;
    return (n*nsum(n-1));
}
int main(){
    int n=5, ans;
    ans=nsum(n);
    printf("%d",ans);
    return 0;
}