#/*7. To read a file and write into another file converting all characters to upper case.
week: 9
date:06/11/2024 */
#include <stdio.h>

int main() {
    char c[100];
    FILE *ptr1, *ptr2;

    ptr1 = fopen("rak.txt", "r");
    if (ptr1 == NULL) {
        printf("Error");
        return 0;
    }

    ptr2 = fopen("rok.txt", "w");

    fgets(c, 100, ptr1);
    printf("Original contents\n");
    puts(c);
    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] >= 'a' && c[i] <= 'z')
            c[i] = c[i] - 32;
    }

    fputs(c, ptr2);
    printf("Converted contents\n%s", c);

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}
