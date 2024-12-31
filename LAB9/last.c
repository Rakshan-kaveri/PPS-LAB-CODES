/*9. To print the last n characters of a file. Input ‘file name’ and ‘n’ value from console.
week: 9
date:6 /11/2024*/
#include<stdio.h>
#include<stdlib.h>
    void acess(char *filename,int n)
    {
        int i=0;
        char tem[1000];
          FILE* ptr1 ;
    ptr1 = fopen(filename,"r");
    if(ptr1==NULL)
        {printf("Error");
            exit (0);}
fseek(ptr1, 0, SEEK_END);
    long file_size = ftell(ptr1);


    if (n > file_size) {
        printf("n is larger than file size\n");
          exit(0);
    }
    fseek(ptr1, -n, SEEK_END);

    printf("Last %d characters of the file:\n", n);
    for (int i = 0; i < n; i++)
     {
        int ch = fgetc(ptr1);
        if (ch != EOF) {
            putchar(ch);
        }
    }

      fclose(ptr1);
    }
 int main()
 {  int n;
    char filename[100];
    printf("input a file name and number of last characters to be printed\n");
    scanf("%s",filename);
    scanf("%d",&n);
    acess(filename,n);  
    return 0;
  
 }

