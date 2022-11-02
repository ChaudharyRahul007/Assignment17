/*6. Write a program to reverse a string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    int i,l;
    printf("Enter any string :");
    gets(str);

    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("Reverse string is = %s",str);
    return 0;
}