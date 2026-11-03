#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("student.txt","w");
    int n;
    char name[100];
    int age;
    float cgpa;
    printf("enter the number of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       printf("enter name of student:");
       scanf("%s",&name);
       printf("enter age:");
       scanf("%d",&age);
       printf("enter cgpa:");
       scanf("%f",&cgpa);
       fprintf(fptr,"%s\t%d\t%f\n",name,age,cgpa);
    }
    fclose(fptr);
    return 0;
}