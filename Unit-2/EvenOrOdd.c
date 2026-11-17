//program to find if num is even or odd
#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    printf("enter num ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    getch();
}