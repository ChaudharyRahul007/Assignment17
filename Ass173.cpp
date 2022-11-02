/*3. Write a program to count vowels in a given string*/
#include<stdio.h>
int main()
{
    char str[20],vol[]={"aeiouAEIOU"};
    int i,j,count;
    printf("Enter any string : ");
    gets(str);
    for(i=0;str[i];i++)
    {
        for(j=0;vol[j];j++)
        {
            if(str[i]==vol[j])
            {
                count++;
                break;
            }
        }
    }
    printf("total vowels in a %s  = %d ",str,count);
    return 0;
}