#include<stdio.h>
int main(){
    int num,reverse,first_digit,second_digit,third_digit;
    printf("enter a three digit number:");
    scanf("%d",&num);
    first_digit=num/100;
    second_digit=(num/10)%10;
    third_digit=num%10;
    reverse=third_digit*100+second_digit*10+first_digit;
    printf("the reverse of %d is %d",num,reverse);
    return 0;   
}