#include<stdio.h>
_Bool search(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int element=8;
    int n=sizeof(arr)/sizeof(arr[0]);
    if(search(arr,n,element)){
        printf("Element is present");
    }
    else{
        printf("Element is not present");
    }
    return 0;
}