/*2. Write a program to count the occurrence of a given character in a given string.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20],search;
    int i,count=0;
    printf("Enter any string :");
    gets(str);
    printf("Enter any character that you want to search :");
    search=getch();
    for(i=0;str[i];i++)
    {
        if(str[i]==search)
        {
            count++;
        }
    }
    printf("\ntotal Occurence of %c = %d",search,count);
    return 0;
}