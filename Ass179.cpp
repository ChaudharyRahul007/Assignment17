/*9. Write a C program to sort a string array in ascending order.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10],ch[10];
    int i,j,r;
    printf("Enter 5 name :\n");
    for(i=0;i<=4;i++)
    gets(str[i]);
    for(j=1;j<=4;j++)
    {
        for(i=0;i<=4-j;i++)
        {
            r=strcmp(str[i],str[i+1]);
            if(r>0)
            {
                strcpy(ch,str[i]);
                strcpy(str[i],str[i+1]);
                strcpy(str[i+1],ch);
            }
        }
    }
    printf("\nAsceding order\n ");
    for(i=0;i<=4;i++)
        puts(str[i]);
    return 0;

}