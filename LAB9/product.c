/*5. Define a structure for a product with members for product ID, name, and price. Write a program to create array of products using pointers, input their details, and display
them. (Use the concept of pointers and structures)
week: 9
date:06/11/2024*/
#include <stdio.h>

int main()
 {
    struct Product
     {
        int id;
        char name[50];
        float price;
    }products[100],*ptr = products;
    int n;

    printf("Enter the number of products (max 100): ");
    scanf("%d", &n);

    if (n > 100 || n < 1) {
        printf("Invalid number of products. Please enter a number between 1 and 100.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for product %d\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &(ptr + i)->id);
        printf("Product Name: ");
        scanf("%s", (ptr + i)->name);
        printf("Product Price: ");
        scanf("%f", &(ptr + i)->price);
    }

    printf("\nProduct Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Product %d\n", i + 1);
        printf("ID: %d\n", (ptr + i)->id);
        printf("Name: %s\n", (ptr + i)->name);
        printf("Price: %.2f\n", (ptr + i)->price);
        printf("\n");
    }

    return 0;
}
