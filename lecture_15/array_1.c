#include<stdio.h>
int main(){
    // array ko declare karna
    int arr[5];
    printf("Enter the elements:\n");
    // input lena aur seedha array ke ander store 
    // kara dena
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Output is \n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}