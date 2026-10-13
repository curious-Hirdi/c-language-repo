#include <stdio.h>
int main(){
    int n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    int i=1;
    for(i=1;i<=n;i++){
        sum=sum+i;
        
    }
    printf("the sum of first %d natural numbers is:%d",n,sum);
    return 0;

}