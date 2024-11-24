#include<stdio.h>
int swap(int* m,int* n) {
    int temp=*m;
    *m=*n;
    *n=temp;
    return *m,*n;
}
int main() {
    int a,b;
    printf("enter any number");
    scanf("%d",&a);
    printf("enter any number");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d\t%d",a,b);
}
