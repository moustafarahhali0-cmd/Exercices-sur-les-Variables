
#include <stdio.h>

int main()
{
    float n1,n2,n3; 
    float c1,c2,c3;
    float moyen;
    printf("Entrez la premiere note : ");
    scanf("%f", &n1);
    printf("Entrez son coefficient : ");
    scanf("%f", &c1);

    printf("Entrez la deuxieme note : ");
    scanf("%f", &n2);
    printf("Entrez son coefficient : ");
    scanf("%f", &c2);

    printf("Entrez la troisieme note : ");
    scanf("%f", &n3);
    printf("Entrez son coefficient : ");
    scanf("%f", &c3);
    moyen=(n1*c1+n2*c2+n3*c3)/(c1+c2+c3);
    printf("le moyen de la notes est %.f",moyen);

    return 0;
}
