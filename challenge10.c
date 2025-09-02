
#include <stdio.h>
#include <math.h>

int main()
{
        float r, volume;
        float const pi=3.14;
        printf("Enter la rayon de sphere ? ");
        scanf("%f", &r);
        volume = (4 / 3) * pi * pow(r, 3);
        printf("the valume the rayon de sphere est  %.2f",volume);
        
        



    return 0;
}
