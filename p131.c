#include<stdio.h>

int main(){

    int mat[2][7];
    //taking input
    for(int i=0;i<2;i++) for(int j=0;j<7;j++) scanf("%d",&mat[i][j]);
    //printing itj+1,":",
    for(int i=0;i<2;i++) for(int j=0;j<7;j++) printf("City %d ,Day %d: %d \n",i+1,j+1,mat[i][j]);




    return 0;
}