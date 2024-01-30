#include<stdio.h>

int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b<c) printf("no");
    else if(b+c<a) printf("no");
    else if(c+a<b) printf("no");
    else printf("Yes");

    return 0;
}