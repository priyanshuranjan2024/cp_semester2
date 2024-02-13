#include<stdio.h>

int lucas(int n){
    if(n==1) return 1;
    if(n==2) return 3;

    return lucas(n-1)+lucas(n-2);

}

int main(){
    int n;
    scanf("%d",&n);

    //printing lucas with for loop
    for(int i=1;i<=n;i++) printf("%d, ",lucas(i));


    return 0;
}