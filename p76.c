#include<stdio.h>

int main(){

    char c;
    scanf("%c",&c);

    if(c>='a' && c<='z'){
        c=c-'a'+'A';
        printf("%c\n",c);
    }
    
    else if(c>='A' && c<='Z') printf("already in uppercase\n");
    else printf("the entered character is not a alphabet\n");

    return 0;
}