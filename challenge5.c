/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temperature;
     printf("Entrez la temperature en Celsius : ");
     scanf("%d", &temperature);
     if(temperature<0){
         printf("glace");
     }
     else if(temperature>=0&&temperature<100){
         printf("liquide");
     }
     else{
         printf("vapeur");
     }

    return 0;
}
