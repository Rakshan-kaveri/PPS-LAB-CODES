/*7. To read a file and write into another file converting all characters to upper case.
week: 9
date:06/11/2024 */
#include <stdio.h>
#include <ctype.h>
int main()
{
    int c;
    FILE *ptr1, *ptr2;

    ptr1 = fopen("rak.txt", "r");
    if (ptr1 == NULL)
    {
        printf("Error opening rak.txt\n");
        return 0;
    }
    ptr2 = fopen("rok.txt", "w");
    if (ptr2 == NULL)
    {
        printf("Error creating rok.txt\n");
        fclose(ptr1);
        return 0;
    }

    /* copy the whole file character by character, not just the first line */
    while ((c = fgetc(ptr1)) != EOF)
        fputc(toupper(c), ptr2);

    printf("Contents of rak.txt copied to rok.txt in upper case\n");
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
