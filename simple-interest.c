#include<stdio.h>
int main() {
    int principal,t,simple_interest;
    float rate_of_interest;
    printf("enter principal and t: ");
    scanf("%d%d",&principal,&t);
    printf("enter rate of interest:");
    scanf("%f\n",&rate_of_interest);
    simple_interest=(principal*rate_of_interest*t)/100;
    printf("simple interest is: %d\n",simple_interest);
    return 0 ;
    }