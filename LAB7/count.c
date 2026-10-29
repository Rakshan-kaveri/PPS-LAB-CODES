/*1. Count the number of words in a sentence.
week: 7
date:23/10/2024
*/
#include<stdio.h>
int main()
{
    int i,count=0,inword=0;
    char a[100];
    printf("Enter a sentence\n");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' '||a[i]=='\t'||a[i]=='\n')
            inword=0;
        else if(!inword)
        {
            inword=1;
            count++;
        }
    }
    printf("number of words in the sentence is %d\n",count);
    return 0;
}
