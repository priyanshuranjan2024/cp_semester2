#include<stdio.h>

int main(){
    float buying_price,marker_price,discount;

    scanf("%f",&buying_price);
    scanf("%f",&marker_price);
    scanf("%f",&discount);

    float selling_price=marker_price-((marker_price*discount)/100);

    if(selling_price<buying_price){
        float loss=((buying_price-selling_price)/buying_price)*100;
        printf("seller made loss of %f",loss);
    }
    else if(selling_price==buying_price) printf("No profit no loss");
    else{
        float profit=((selling_price-buying_price)/buying_price)*100;
        printf("seller madea profit of %f",profit);

    }

    return 0;
}