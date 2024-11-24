#include<stdio.h>
int lcm(int a,int b){
int i;
for(i=2;i<=a*b;i++){
if(i%a==0&&i%b==0){
break;}
}
return i;
}
int main(){
int a,b;
printf("enter any number");
scanf("%d",&a);
printf("enter any number");
scanf("%d",&b);
printf("%d\t",lcm(a,b));
}
