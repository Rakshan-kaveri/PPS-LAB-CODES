/*8. To count and display the number of characters, words and lines of a file.
week: 9
date:6 /11/2024
 */
#include<stdio.h>
int main()
{
    int c,cha=0,word=0,lines=0,inword=0,last='\n';
    FILE *ptr1;
    ptr1=fopen("lines.txt","r");
    if(ptr1==NULL)
    {
        printf("Error opening lines.txt\n");
        return 0;
    }
    printf("contents of the file\n");
    while((c=fgetc(ptr1))!=EOF)      /* c must be int to detect EOF correctly */
    {
        putchar(c);
        if(c!='\n')
            cha++;
        if(c=='\n')
            lines++;
        if(c==' '||c=='\t'||c=='\n')
            inword=0;
        else if(!inword)
        {
            inword=1;
            word++;
        }
        last=c;
    }
    if(last!='\n')      /* last line without a newline at the end */
        lines++;
    printf("\nnumber of characters:%d",cha);
    printf("\nnumber of words:%d",word);
    printf("\nnumber of lines:%d\n",lines);
    fclose(ptr1);
    return 0;
}
