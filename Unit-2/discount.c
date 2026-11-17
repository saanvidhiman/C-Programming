//program for discount
#include<stdio.h>
#include<conio.h>
void main(){
    int a,q,total,dis;
    printf("enter sum ");
    scanf("%d",&a);
    printf("enter quantity ");
    scanf("%d",&q);
    total=a-(a*q);
    if (total>1000)
    {
        dis=total-(total*15/100);
        printf("discount=%d",dis);
    }
    else
    {
        dis=total-(total*10/100);
        printf("discount=%d",dis);
    }
    getch();
}