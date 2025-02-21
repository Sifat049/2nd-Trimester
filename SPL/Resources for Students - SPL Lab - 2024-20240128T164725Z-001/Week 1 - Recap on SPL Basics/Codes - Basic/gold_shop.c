#include<stdio.h>
int main()
{
   float cust_bought_bhori;
   float discount_rate, daily_rate;
   float price, discounted_price;
   int cust_price;


   system ("color 70");

   printf("\n\t\t\t   Checkout Menu\n");

   printf("\nEnter Today's price per bhori: ");
   scanf("%f", &daily_rate);

   printf("\nEnter today's special discount rate (in %%): ");
   scanf("%f", &discount_rate);

   printf("\nEnter the weight of Gold bought by customer (in bhori): ");
   scanf("%f", &cust_bought_bhori);

   //price = ((cust_bought_bhori*daily_rate) - (cust_bought_bhori*daily_rate)*.05 + ((cust_bought_bhori*daily_rate)*.95)*0.15) + 1;
   //calculation
   price = cust_bought_bhori*daily_rate;


   price = price * ((100-discount_rate)/100);

   price = price*1.15;
   price++;


   printf("\nPrice: %f", price);
   printf("\n\n\t****%.1f%% discount given and 15%% vat added to the price. And 1 tk donated!****\n", discount_rate);


   cust_price = (int)price; //typecasting
   cust_price=cust_price-cust_price%100; //floor to nearest hundred


   printf("\nPrice for the customer (discard after decimal (no paisas!), floored to nearest 100!): %d\n\n", cust_price);


}
