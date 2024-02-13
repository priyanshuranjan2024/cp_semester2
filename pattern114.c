#include<stdio.h>


int main(){
    int row;
    scanf("%d",&row);

    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}