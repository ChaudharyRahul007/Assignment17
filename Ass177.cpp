/*7. Write a program in C to count the total number of alphabets, digits and special characters in a string.*/
#include<stdio.h>
int main()
{
    char str[20];
    int i,ab=0,dc=0,sc=0;
    printf("Enter any string :");
    gets(str);
    for(i=0;str[i];i++)
    {
        if((str[i]>='A' && str[i]<='Z' ) || (str[i]>='a' && str[i]<='z'))
         ab++;
        else if(str[i]>='0' && str[i]<='9')
          dc++;
          else
          sc++;
    }
    printf("total number of alphabets = %d , Digits = %d , special characters = %d ",ab,dc,sc);
    return 0;
}