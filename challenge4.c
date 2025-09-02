/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float kmh,ms;
    printf("Entrez la vitesse en km/h : ");
    scanf("%f",&kmh);
    ms=kmh/3.6;
    printf("%.2f kmh=== %.2f ms",kmh,ms);


    return 0;
}
