#include<stdio.h>
// 1. no return and no parameter
void greet(){
    printf("Good morning");
}
// 2. no return and parameter
void age(int age){
    printf("My age is %d",age);
}
//3. return and no parameter
int sub(){
    int a=10;
    int b=5;
    int subtract=a-b;
    return subtract;
}
//4 return and parameter
int add(int a,int b){
    int sum=a+b;
    return sum;
}