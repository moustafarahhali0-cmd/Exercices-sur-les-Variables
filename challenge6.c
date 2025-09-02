
#include <stdio.h>

int main()
{
    int A,B,operateur;
    printf("enter number one ?\n");
    scanf("%d",&A);
    printf("enter number two ?\n");
    scanf("%d",&B);
    printf("plase choice operateur:\n1:(+)\n2:(-)\n3(*)\n");
    scanf("%d",&operateur);
    switch(operateur){
        case 1:printf("%d + %d = %d ",A,B,A+B);
        break;
        case 2:printf("%d - %d = %d ",A,B,A-B);
        break;
        case 3:printf("%d x %d = %d ",A,B,A*B);
        break;
        default:printf("invalid choice");
        break;
        
    }
    
    
    

    return 0;
}
