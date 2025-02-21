#include<stdio.h>

int main(){
    double buying_price, selling_price, profit, loss;

    printf("Enter buying price: ");
    scanf("%lf", &buying_price);

    printf("Enter selling price: ");
    scanf("%lf", &selling_price);

    if(buying_price < selling_price){
        profit= selling_price - buying_price;
        printf("Profit %.2lf%%", profit/buying_price*100);
        //%% prints %
    }
    else{
        loss = buying_price - selling_price;
        printf("Loss %.2lf%%", loss/buying_price*100);
    }
}
