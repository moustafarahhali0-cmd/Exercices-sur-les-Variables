
#include <stdio.h>

int main()
{
    int number;
    int d1,d2,d3,d4;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);
    d1 = number % 10;              
    d2 = (number / 10) % 10;        
    d3 = (number / 100) % 10;   
    d4 = number / 1000; 
    printf("le inverse de number is %d%d%d%d",d1,d2,d3,d4);


    return 0;
}
