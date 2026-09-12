#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d\n",&n);
    int i=0;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    getch();
    return 0;
}
