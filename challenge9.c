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
    float x1, y1, z1;
    float x2, y2, z2;
    float distance;
    printf("Enter coordinates of point A (x1 y1 z1): ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("enter coordinates of point B (x2 y2 z3):");
    scanf("%f%f%f",&x1,&y2,&z2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1,2));
    printf("les distance est : %.f",distance);


    return 0;
}
