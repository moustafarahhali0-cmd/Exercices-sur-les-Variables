
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, z1;
    float x2, y2, z2;
    float d;
    printf("Enter distance euclidienne (x1 y1 z1): ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("enter distance euclidienne (x2 y2 z3):");
    scanf("%f%f%f",&x2,&y2,&z2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1,2));
    printf("les distance est : %.f",d);


    return 0;
}
