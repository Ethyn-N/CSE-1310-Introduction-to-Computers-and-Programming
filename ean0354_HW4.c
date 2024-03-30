#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float floatFunction(float number);

void powerTable();

char charFunction(char character);




int main(void)
{
    float floatNumber;
    char characterValue;
    
    printf("Please Input a float: ");
    scanf("%f", &floatNumber);

    floatFunction(floatNumber) == floatNumber;
    
    printf("int value = %d\n", (int)floatNumber);
    
    printf("----------------\n");
    
    powerTable();
    
    printf("----------------\n");
    
    printf("Please input a character: ");
    
    scanf(" %c", &characterValue);
    
    charFunction(characterValue) == characterValue;
    
    printf("Decimal value again: %d\n", (int)characterValue);
    
    
}

float floatFunction(float number)
{
    
    printf("Original Value = %f\n", number);
    
    printf("Floor of Value = %.0f\n", floor(number));
    
    printf("Ceiling of Value = %.0f\n", ceil(number));
    
    printf("Round of Value = %.0f\n", round(number));
    
    return number;
}

void powerTable()
{
    float number = 1;
    
    char n[] = "n";
    char n2[] = "n^2";
    char n3[] = "n^3";
    char negativeN1[] = "n^-1";
    char negativeN2[] = "n^-2";
    
    printf("%s%10s%8s%14s%7s\n", n,n2,n3,negativeN1,negativeN2);
    
    for(int i = number; number <= 10; number++)
    {
        printf("%-8.0f%-8.0f%-12.0f%-6.3f%f\n", number, pow(number, 2), pow(number, 3), pow(number, -1), pow(number, -2));
    }
    
}

char charFunction(char character)
{
    printf("Char value: %c\n", character);
    
    printf("Decimal value: %d\n", (int)character);
    
    printf("Hex value: %02X\n", character);
    
    return character;

}











