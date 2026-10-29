/* Define a structure for a student with a nested structure for the address (including street, city, and zip code). Write a program to input and display student details along
with their address (Use nested structure concept)
week: 8
date:30/10/2024
*/
#include<stdio.h>
struct address
{
    char street[100];
    char city[50];
    int zip;
};
struct student
{
    char name[50];
    int reg_no;
    struct address addr;   /* nested structure */
};
int main()
{
    struct student s[30];
    int n,j;
    printf("Enter number of students\n");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        printf("\nStudent %d\n",j+1);
        printf("Enter student name:");
        scanf(" %49[^\n]",s[j].name);
        printf("Enter student reg_no:");
        scanf("%d",&s[j].reg_no);
        printf("Enter street name:");
        scanf(" %99[^\n]",s[j].addr.street);
        printf("Enter city name:");
        scanf(" %49[^\n]",s[j].addr.city);
        printf("Enter zip code:");
        scanf("%d",&s[j].addr.zip);
    }
    printf("\nEntered student details are\n\n");
    for(j=0;j<n;j++)
    {
        printf("Name    : %s\n",s[j].name);
        printf("Reg no  : %d\n",s[j].reg_no);
        printf("Street  : %s\n",s[j].addr.street);
        printf("City    : %s\n",s[j].addr.city);
        printf("Zip code: %d\n\n",s[j].addr.zip);
    }
    return 0;
}
