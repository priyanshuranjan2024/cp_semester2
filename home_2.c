#include<stdio.h>
int main(){
    int paisa;
    scanf("%d",&paisa);
    int ruppee=paisa/100;
    int remaining_paisa=paisa%100;
    printf("Rupee:%d, Paisa:%d",ruppee,remaining_paisa);

    return 0;
}