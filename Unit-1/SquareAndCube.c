//program to give squre and cube of a number
#include<stdio.h>
#include<conio.h>
void main(){
    int a,sq,cube;
    printf("enter num ");
    scanf("%d",&a);
    sq=a*a;
    cube=a*a*a;
    printf("square=%d\n",sq);
    printf("cube=%d\n",cube);
    getch();
}