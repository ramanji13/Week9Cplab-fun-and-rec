#include<stdio.h>
#include<string.h>
int main() {
    char ch[200]= {"Rama13#£"};
    int i,k=0,l=0,m=0;
    for(i=0; ch[i]!='\0'; i++) {
        if(ch[i]>=65&&ch[i]<=90)
        {
            ch[i]=ch[i]+32;
            k++;
        }
        else if(ch[i]>=90&&ch[i]<=122) {
            ch[i]=ch[i]-32;
            l++;
        }
        else {
            ch[i]=ch[i];
            m++;
        }
    }
    printf("%s\n",ch);
    printf("capital letters are %d\n",k);
    printf("small letters are %d\n",l);
    printf("numbers and symbols letters are %d\n",m);
}
