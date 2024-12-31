 /* Define a structure for a student with a nested structure for the address (including street, city, and zip code). Write a program to input and display student details along
with their address (Use nested structure concept)
week: 8
date:30/10/2024
*/
#include<stdio.h>
 int main()
 {
    int i;
    struct student
    {
       char name[20];
       int  reg_no;
       struct address
       {
        char add[100];
        char city[50];
        int zip;
       }add[30];
       
    }s[30];
    printf("Enter number of students\n");
    scanf("%d",&i);
    for(int j=0;j<i;j++)
    {
            printf("Enter student name:");
                scanf("%s",&s[j].name);
                printf("Enter student reg_no:");
                scanf("%d",&s[j].reg_no);
                printf("Enter student_address\n");
                printf("Enter street name:");
                scanf("%s",&s[j].add[j].add);
                   printf("Enter city name:");
                     scanf("%s",&s[j].add[j].city);  
                 printf("Enter zip code:");
                 scanf("%d",&s[j].add[j].zip);
    }
    printf("\n");
    printf("Entered student details are\n\n");
    for( int j=0;j<i;j++)
    {
            printf("student name:");
                printf("%s\n",s[j].name);
                printf("student reg_no:");
                printf("%d\n",s[j].reg_no);
                printf("student_address\n");
                printf("street name:");
                printf("%s\n",s[j].add[j].add);
                printf("city name:");
                printf("%s\n",s[j].add[j].city);  
                printf("zip code:");
                printf("%d\n",s[j].add[j].zip);
                printf("\n");
    }
    return 0;
 }
