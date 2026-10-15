#include <stdio.h>
int fact(int n);
int main(){
    printf("factorial of 5 is: %d", fact(5));
    return 0;
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
            return fact(n-1)*n;

    }
}
