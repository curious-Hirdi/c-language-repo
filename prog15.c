#include<stdio.h>
int revArr(int arr[],int n);
int main(){
    int arr[]={1,5,9,8,7,4,3};
    revArr(arr,7);
    return 0;
}
int revArr(int arr[], int n){
    for(i=0;n/2;i++){
        first_val=arr[i];
        second_val=arr[n-i-1];
        arr[i]=second_val;
        arr[n-i-1]=first_val;
        printf("%d\t",arr[i]):
    }
}