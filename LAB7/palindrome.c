/*3. Check whether the given string is a palindrome or not.
week: 7
date:23/10/2024
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int flage=1,i,n=0;
    char a[100];
    printf("Enter a String\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }

    for(i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flage=0;
            break;
        }
    }
    if(flage==1)
    {
        printf("Entered String is a palindrome");
    }
    else
        printf("Entered String is not a palindrome");

    return 0;

}
