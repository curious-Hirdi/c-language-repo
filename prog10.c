#include<stdio.h>
int max(int*ptr1,int*ptr2);
int main(){
    int a=3,b=9;
    int *ptr1=&a;
    int *ptr2=&b;
    max(ptr1,ptr2);
    return 0;
}
int max(int *ptr1,int *ptr2){
    if(*ptr1>*ptr2){
        printf("%d is the greatest \n",*ptr1);
    }
    else{
        printf("%d is the greatest",*ptr2);
    }
    
}