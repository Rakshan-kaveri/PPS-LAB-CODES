/*1. Count the number of words in a sentence.
week: 7
date:23/10/2024
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,count;
    char a[100];
    printf("Enter a sentence\n");
    gets (a);
    i=0;
    count=1;
    while(a[i]!='\0')
    {
        if(a[i]==' ' && a[i+1]!=' ')
        {
            count++;

        }
        i++;
    }
    printf("number of words in the sentence is %d",count);
    return 0;
}
