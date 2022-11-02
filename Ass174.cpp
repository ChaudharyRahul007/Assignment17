/*4. Write a program to convert a given string into uppercase*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter any string :");
    gets(str);
    char*strupr(char*);
    printf("%s",strupr(str));
    return 0;
    
}