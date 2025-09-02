
#include <stdio.h>

int main()
{
    int age;
    char first_name[50];
    char last_name[50];
    char country[50];
    printf("enter your first name?\n");
    scanf("%s",first_name);
    printf("enter your last name ?\n");
    scanf("%s",last_name);
    printf("enter your age ?\n");
    scanf("%d",&age);
    printf("enter your country city ?\n");
    scanf("%s",country);
    printf("your first name is %s\nyour last name is %s\nyour age is %d\nyour country city is %s ",first_name,last_name,age,country);
    

    return 0;
}