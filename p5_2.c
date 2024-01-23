#include<stdio.h>

int main(){
    int meters,kilo;
    scanf("%d",&meters);
    kilo=meters/1000;
    meters=meters%1000;

    printf("%d kilometeres,%d meters\n",kilo,meters);

    return 0;
}