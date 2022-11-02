/*1. Write a program to calculate the length of the string. (without using built-in method)*/
#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a name :");
    gets(str);
    for(i=0;str[i];i++);
    printf("%d ",i);
    return 0;
}
