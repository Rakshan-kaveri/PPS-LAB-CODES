/*2. Input a string and toggle the case of every character in the input string.
week: 7
date:23/10/2024
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char k[100];
    int i;
    printf("Enter a string\n");
    fgets(k,sizeof(k),stdin);
    k[strcspn(k,"\n")]='\0';
    for(i=0;k[i]!='\0';i++)
    {
        if(k[i]>='A'&&k[i]<='Z')
            k[i]=k[i]+32;
        else if(k[i]>='a'&&k[i]<='z')
            k[i]=k[i]-32;
    }
    puts(k);
    return 0;
}
