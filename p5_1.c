#include<stdio.h>

int main(){
    int sec;
    scanf("%d",&sec);
    int hour,min;
    hour=sec/3600;
    sec=sec%3600;
    
    min=sec/60;
    sec=sec%60;
    

    printf("%d Hours,%d minutes,%d seconds",hour,min,sec);


    return 0;
}