/*5. Write a program to convert a given string into lowercase*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter any string :");
    gets(str);
   // char*strlwr(char*);
   // printf("%s",strlwr(str));
   for(int i =0;str[i];i++)
   {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("%s",str);
   
    return 0;
}