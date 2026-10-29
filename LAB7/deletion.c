/*4. Delete a word from the given sentence.
week: 7
date:23/10/2024
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],word[100],result[100]="",*tok;
    int found=0;
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    printf("Enter word to be deleted: ");
    fgets(word,sizeof(word),stdin);
    word[strcspn(word,"\n")]='\0';

    /* split the sentence into words and copy every word except the first match */
    tok=strtok(str," ");
    while(tok!=NULL)
    {
        if(!found && strcmp(tok,word)==0)
            found=1;
        else
        {
            if(result[0]!='\0')
                strcat(result," ");
            strcat(result,tok);
        }
        tok=strtok(NULL," ");
    }

    if(found)
        printf("Sentence after deleting \"%s\": %s\n",word,result);
    else
        printf("\"%s\" not found in the sentence\n",word);
    return 0;
}
