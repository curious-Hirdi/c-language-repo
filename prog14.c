#include<stdio.h>
int arrodd(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,7};
    arrodd(arr,6);
    return 0;
}
int arrodd(int arr[],int n){
    int count=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2!=0){
            count+=1;
        }
    }
    printf("the number of odd elements in the array is %d",count);
    

}