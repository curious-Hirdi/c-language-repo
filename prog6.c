#include<stdio.h>
int main(){
    int f1=0,f2=1,next,n;
    printf("enter number of terms to print");
    scanf("%d",&n);
    printf("fibonacci series is %d %d",f1,f2);
    for(int i=3;i<=n;i++){
        next=f1+f2;
        f1=f2;
        f2=next;
        printf("%d",next);
    }
return 0;

}