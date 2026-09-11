#include<stdio.h>
int main() {
    int num;
    printf("enter the number to check divisibility by 2: ");
    scanf("%d",&num);
    printf("%d",num%2==0);
    return 0;
}