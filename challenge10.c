/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
        float radius, volume;
        printf("Enter the radius of the sphere: ");
        scanf("%f", &radius);
        volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
        printf("the valume the radius of the sphere %.2f is %.2f",radius,volume);
        



    return 0;
}
