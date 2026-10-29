/*3. Check whether the given string is a palindrome or not.
week: 7
date:23/10/2024
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int flag=1,i,n;
    char a[100];
    printf("Enter a String\n");
    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';
    n=strlen(a);
    for(i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Entered String is a palindrome\n");
    else
        printf("Entered String is not a palindrome\n");
    return 0;
}
