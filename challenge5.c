
#include <stdio.h>

int main()
{
    int t;
     printf("Entrez la temperature en Celsius : ");
     scanf("%d", &t);
     if(t<0){
         printf("glace");
     }
     else if(t>=0&&t<100){
         printf("liquide");
     }
     else{
         printf("vapeur");
     }

    return 0;
}
