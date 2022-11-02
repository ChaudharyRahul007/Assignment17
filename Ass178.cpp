/*8. Write a program in C to copy one string to another string*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20];
    int i;
    printf("Enter any string :");
    gets(str);
    //strcpy(str1,str);
   for( i=0;str[i];i++)
   {
    str1[i]=str[i];
   }
   str1[i]='\0';
    printf("copy to string  str1 : %s ",str1);
    return 0;

}