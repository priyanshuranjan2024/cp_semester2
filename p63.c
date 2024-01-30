#include<stdio.h>

int main(){
    int x,y,z,maximum;
    scanf("%d %d %d",&x,&y,&z);
    maximum=x;
    if(y>maximum) maximum=y;
    if(z>maximum) maximum=z;

    printf("%d is the maximum",maximum);

    return 0;
}