#include<stdio.h>
int fib(int n){
if(n==2||n==1)
return 1;
return fib(n-1)+fib(n-2); 
}
int main(){
int n;
printf("enter any number");
scanf("%d",&n);
printf("%d\t",fib(n));
}
