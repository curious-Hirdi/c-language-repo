#include<stdio.h>
char main(){
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("uppercase");
    }
    else if(ch>='a'&& ch<='z'){
        printf("lowercase");
        }
    else{
    printf("not an alphabet");
     }
    return 0;

    }
    
