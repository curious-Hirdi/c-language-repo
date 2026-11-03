#include<stdio.h>
struct complex {int real;int img;};
int main(){
    struct complex c1={4,9};
    struct complex *ptr=&c1;
    printf("the real part of the complex number is:%d\n",(*ptr).real);
    printf("the imaginary part of the complex number is:%d",(*ptr).img);
    return 0;
}