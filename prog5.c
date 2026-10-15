#include<stdio.h>
#include<math.h>
float power(float x,float y);
int main(){
    float x,y;
    float s;
    printf("enter base:");
    scanf("%f",&x);
    printf("enter power:");
    scanf("%f",&y);
    s=power(x,y);
    printf("power is:%f",s);
    return 0;

}
float power(float x,float y){
    return pow(x,y);

}