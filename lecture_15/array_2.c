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
    // sum of elements
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("Sum is %d\n",sum);
    printf("Average is %d", sum/n);
    return 0;
}