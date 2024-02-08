#include<stdio.h>

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    //menu
    int menu_choice;
    printf("1.Add\n");
    printf("2.Mulitply\n");
    printf("3.Substract\n");
    printf("4.Divide\n");
    printf("Enter your choice\n");
    scanf("%d",&menu_choice);
    if(menu_choice==1) printf("%d",num1+num2);
    else if(menu_choice==2) printf("%d",num1*num2);
    else if(menu_choice==3) printf("%d",num1-num2);
    else if(menu_choice==4) printf("%d",num1/num2);



    return 0;
}