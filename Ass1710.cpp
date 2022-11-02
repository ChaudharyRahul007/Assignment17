/*10. Write a program in C to Find the Frequency of Characters*/
#include<stdio.h>
int main()
{
    char str[20],ch;
    int i,j,count=0;
    printf("Enter Any String : ");
    gets(str);
    for(ch='a';ch<='z';ch++)
    {
        count =0;
        for(int i=0;str[i];i++)
        {
            if(ch==str[i])
            count++;
        }
        if(count>0)
        printf("%c frequency in %d  \n",ch,count);
    }
    return 0;
}