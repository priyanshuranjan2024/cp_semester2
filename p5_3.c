#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int first,second;
    first=num/100000;
    
    second=num%10;

    int sum=first+second;
    
    printf("%d is the sum\n",sum);

    return 0;
}