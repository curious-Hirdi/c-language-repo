#include<stdio.h>
void maxnum(int *a,int*b);
int main(){
    int a=5;
    int b=6;
    int *ptr=&a;
    int *ptr1=&b;
    maxnum(ptr,ptr1);
    return 0;


}
void maxnum(int *ptr,int *ptr1){
    if(*ptr>*ptr1){
        printf("the maximum number is %d:",*ptr);
    }
    else{
        printf("the maximum number is %d:",*ptr1);
        

    }
}