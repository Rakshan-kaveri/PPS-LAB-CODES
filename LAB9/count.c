#/*8. To count and display the number of characters, words and lines of a file.
week: 9
date:6 /11/2024
 */
#include<stdio.h>
#include<stdlib.h>
 int main()
 {  int cha=0,word=1,lines=1;
    char c;
    FILE* ptr1 ;
    ptr1 = fopen("lines.txt","r");
    if(ptr1==NULL)
    {
        printf("Error");
                exit (0);
    }
     printf("contents of the file\n");
    
     while((c=fgetc(ptr1))!=EOF)
     {
        putchar(c);
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
                cha++;
        if(c==' '||c=='\n')
                word++;
        if(c=='\n')
            lines++;
            
     }
    printf("\nnumber of characters:%d",cha);
     printf("\nnumber of words:%d",word); 
      printf("\nnumber of lines:%d",lines);

    fclose(ptr1);
    return 0;
  
 }
