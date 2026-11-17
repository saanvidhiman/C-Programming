//input 10 digits and print sum 
#include<stdio.h>
#include<conio.h>
void main(){
    int i,sum=0,num;
    for (i=1;i<=10;i++)
    {
        printf("enter num ");
        scanf("%d",&num);
        sum+=num;
    }
    printf("sum=%d",sum);
    getch();
}