#include<stdio.h>
int factorial(int n){
if(n==0||n==1){
return 1;
}int fact=n*factorial(n-1);
return fact; 
}
int main(){
int n;
printf("enter any number");
scanf("%d",&n);
printf("%d",factorial(n));
}
