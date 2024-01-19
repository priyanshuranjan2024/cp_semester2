#include<stdio.h>
int main(){
    //finding the average
    int sub_1,sub_2,sub_3,sub_4,sub_5;
    scanf("%d",&sub_1);
    scanf("%d",&sub_2);
    scanf("%d",&sub_3);
    scanf("%d",&sub_4);
    scanf("%d",&sub_5);

    int sum=sub_1+sub_2+sub_3+sub_4+sub_5;
    float percentage=(sum/1000)*100;
    float avg=(sum/5);

    printf("Average:%f,Percentage:%f",avg,percentage);

    return 0;
}