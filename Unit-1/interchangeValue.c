//write program to interchange value of 2 no
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,temp;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after interchange a=%d b=%d",a,b);
    getch();
}