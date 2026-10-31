#include<stdio.h>
void name(char name[]);
int main(){
    char firstname[]="Hidiveer";
    char lastname[]=" kaur";
    name(firstname);
    name(lastname);
    return 0; 
}
void name(char name[]){
    for(int i=0;name[i]!=0;i++){
        printf("%c",name[i]);

    }
}