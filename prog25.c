#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("hirdi.txt","r");
    char ch;
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    fclose(fptr);
    return 0;
}