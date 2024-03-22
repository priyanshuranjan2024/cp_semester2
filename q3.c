#include<stdio.h>

int sumTillN(int n){
    if(n<=1) return 1;
    return n+sumTillN(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sumTillN(n));

    return 0;
}