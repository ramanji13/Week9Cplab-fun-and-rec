#include<stdio.h>
int A(int m,int n){
if(m==0) return n+1;
else if(m>0&&n==0) return A(m-1,1);
else if (m>0&&n>0) return A(m-1,A(m,n-1));
}
int main(){
int a,b;
printf("enter any number");
scanf("%d",&a);
printf("enter any number");
scanf("%d",&b);
printf("%d\t",A(a,b));
}
