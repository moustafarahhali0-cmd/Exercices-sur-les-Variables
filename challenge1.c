
#include <stdio.h>

int main()
{
    int age;
    char nome[50];
    char Prénom[50];
    char adress_email[100];
    char sexe[50];
    printf("enter your name ?\n"); 
    scanf("%s",nome);
    printf("enter your prénom ?\n");
    scanf("%s",prénom);
    printf("enter your adress email ?\n");
    scanf("%s",adress_email);
    printf("enter your age ?\n);
    scanf("%d",&age);
    printf("enter your sexe (H) or (F) ?\n);
    scanf("%c",&sexe);
    printf("your name is %s\nyour prénom is %s\nyour adress email is %s\nyour age is %d \nyour sexe is %c\n");


    return 0;
}
