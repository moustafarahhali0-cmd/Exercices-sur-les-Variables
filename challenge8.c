
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float moyenne_geo;
    printf("enter valure a?\n");
    scanf("%f",&a);
    printf("enter valure b?\n");
    scanf("%f",&b);
    printf("enter valure c?\n");
    scanf("%f",&c);
    moyenne_geo=pow(a*b*c,1.0/3.0);
    printf("le moyenne est : %.2f ",moyenne_geo);
    

    return 0;
}
