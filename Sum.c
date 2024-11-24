#include<stdio.h>
int sum(int n,int s){
if(n==0){
 printf("sum is%d",s);
return sum;
}sum(n-1,n+s);
return sum; 
}
int main(){
int n;
printf("enter any number");
scanf("%d",&n);
}
