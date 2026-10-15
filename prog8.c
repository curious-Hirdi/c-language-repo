#include<stdio.h>
int main(){
    int age=17;
    int *ptr=&age;  //storing the address of age in ptr so we use astrick
    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    return 0;
}