/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{    

    float celsius;
    float kelvin;
    printf("Entrez la temperature en Celsius? : ");
    scanf("%f",&celsius);
    kelvin=273.15+celsius;
    printf("%.2f c== %.2f k",celsius,kelvin);


    return 0;
}
