
#include <stdio.h>

int main()
{
    int number;
    int unit,tens,hundreds,thousands;
    int inverse;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);
    unit = number % 10;              
    tens = (number / 10) % 10;        
    hundreds = (number / 100) % 10;   
    thousands = number / 1000; 
    inverse = unit * 1000 + tens * 100 + hundreds * 10 + thousands;
    printf("le inverse de number is %d",inverse);


    return 0;
}
