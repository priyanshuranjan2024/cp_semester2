#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int mat1[n][n];
    int mat2[n][n];

    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&mat1[i][j]);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&mat2[i][j]);

    int ans[n][n];

    int count1=0;
    int count2=0;



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;
            for(int k=0;k<n;k++){
                ans[i][j]+=mat1[i][k]*mat2[k][j];
            }


        }
    }



    //printing the ans matrix
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) printf("%d ",ans[i][j]);

    return 0;
}