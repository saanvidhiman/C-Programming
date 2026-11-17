//program to see if user is above 18 and eligible to vote
#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    printf("enter age ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("eligible to vote");
    }
    else
    {
        printf("not eligible to vote");
    }
    getch();
}