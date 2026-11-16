#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int a=5;
    printf("%d",sizeof(arr)/sizeof(arr[0]));
    return 0;
}