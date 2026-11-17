//input 2 values and check if first is dividible by the second
#include<stdio.h>
#include<conio.h>
void main(){
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    if (a%b==0)
    {
        printf("divisible");
    }
    else
    {
        printf("not divisible");
    }
    getch();
}