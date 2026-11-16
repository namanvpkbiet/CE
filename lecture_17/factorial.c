#include<stdio.h>
// factorial of a number
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int factorial=fact(n);
    printf("The factorial of number n is %d\n",factorial);
    return 0;
}