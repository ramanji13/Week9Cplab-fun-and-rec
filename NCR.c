#include<stdio.h>
int factorial(int n){
if(n==0||n==1){
return 1;
}int fact=n*factorial(n-1);
return fact; 
}
int main(){
int n,r;
printf("enter any number");
scanf("%d",&n);
printf("enter any number less than first number");
scanf("%d",&r);
printf("%d",factorial(n)/(factorial(n-r)*factorial(r)));
}
