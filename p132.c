#include<stdio.h>

int main(){
    int mat1[2][2];
    int mat2[2][2];

    for(int i=0;i<2;i++) for(int j=0;j<2;j++) scanf("%d",&mat1[i][j]);
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) scanf("%d",&mat2[i][j]);

    int ans[2][2];
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) ans[i][j]=mat1[i][j]+mat2[i][j];
    //printing the ans matrix
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) printf("%d ",ans[i][j]);

    return 0;
}