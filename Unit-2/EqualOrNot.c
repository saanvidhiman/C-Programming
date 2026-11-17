//program to check if 2 numbers are equal or not
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    if (a==b)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    getch();
}