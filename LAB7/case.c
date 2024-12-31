/*2. Input a string and toggle the case of every character in the input string.
week: 7
date:23/10/2024
*/
#include<string.h>
#include<stdio.h>
int main()
{

    char k[50],i;
    printf("Enter a string\n");
    gets(k);
    for(i=0;k[i]!='\0';i++)
    {
        if(k[i]<=90&&k[i]>=65)
        {
            k[i]=k[i]+32;

        }
        else if(k[i]>=97&&k[i]<=122)
        {
            k[i]=k[i]-32;

        }

    }

        puts(k);
    return 0;

}
