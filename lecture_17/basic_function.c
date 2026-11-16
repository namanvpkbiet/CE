#include<stdio.h>
// function 
int add(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int a=10;
    int b=20;
    printf("%d\n",add(a,b));
    printf("%d\n",add(100,90));
    printf("%d\n",add(20,50));
    return 0;
}