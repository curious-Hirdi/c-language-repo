#include<stdio.h>
int main(){
    float price[3];
    printf("enter price of first item: ");
    scanf("%f",&price[0]);
    printf("enter price of second item: ");
    scanf("%f",&price[1]);
    printf("enter price of third item:");
    scanf("%f",&price[2]);
    printf("price of first item is %f\n",price[0]+(0.18*price[0]));
    printf("price of second item  is %f\n",price[1]+(0.18*price[1]));
    printf("price of third item  is %f\n",price[2]+(0.18*price[2]));
    return 0;

}