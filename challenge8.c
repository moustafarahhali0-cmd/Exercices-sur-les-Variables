
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3;
    float moyenne_geo;
    printf("enter valure x1?\n");
    scanf("%f",&x1);
    printf("enter valure x2?\n");
    scanf("%f",&x2);
    printf("enter valure x3?\n");
    scanf("%f",&x3);
    moyenne_geo=pow((x1*x2*x3),1.0/3.0);
    printf("le moyen Géométrique est %.f",moyenne_geo);

    return 0;
}
