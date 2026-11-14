#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    // input
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    int small=arr[0];
    for(int i=1;i<n;i++){
        // large element
        if(arr[i]>large){
            large=arr[i];
        }
        // small element
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("The largest element in array is %d\n",large);
    printf("The Smallest element in array is %d\n",small);
    return 0;
}
