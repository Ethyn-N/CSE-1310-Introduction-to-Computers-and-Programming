#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void Character(char character);
void LeapYear(int year);
float Energy(int kWh);
int Calculator(int a, int b, char z);
int Factorial(int n);
void PowerTable(int range);
int Addition();
void Stars(int number);




int main()
{
    char c; 
    
    int year;
    
    int kWh; float money;
    
    int a; int b; char z; int result;
    
    int n; int factorial;
    
    int range;
    
    int addResult = 0;
    
    int rows;
       

    printf("Please enter a character: ");
    scanf("%c", &c);
    Character(c);

    printf("--------------\n");
    
    printf("Please enter a year: ");
    scanf("%d", &year);
    LeapYear(year);

    printf("--------------\n");
    
    printf("How many kWh did you use this month? ");
    scanf("%d", &kWh);
    money = Energy(kWh);
    printf("You owe $%.2f.\n", money);
    
    printf("--------------\n");
    
    printf("Please enter an operation in the format of ""1+1"". You may change the numbers and the operation.\n");
    scanf("%d %c %d", &a, &z, &b);
    result = Calculator(a, b, z);
    printf("%d%c%d = %d\n", a, z, b, result);
    
    printf("--------------\n");
    

    printf("Please enter an int: ");
    scanf("%d", &n);
    factorial = Factorial(n);
    printf("%d! = %d\n", n, factorial);
   

    printf("--------------\n");
    
    printf("Please enter an int: ");
    scanf("%d", &range);
    PowerTable(range);
    
    printf("--------------\n");

    addResult = Addition();
    printf("The total is %d\n", addResult);
    
    printf("--------------\n");
    
    printf("Please enter an int: ");
    scanf("%d", &rows);
    Stars(rows);
    
    return 0;
    
}



void Character(char character)
{

    int c = (int)character;
    
    if(c >= 48 && c <=57)
    {
        printf("You have entered a number\n");
    }
    else if(c >= 65 && c <= 90)
    {
        printf("You have entered an upper case letter\n");
    }
    else if(c >= 97 && c <= 122)
    {
        printf("You have entered a lower case letter\n");
    }
    else if(c == 32 || c == 9 || c == 10)
    {
        printf("You have entered a white space\n");
    }
    else
    {
        printf("You have entered a special character\n");
    }
    
}

void LeapYear(int year)
{

    if(year % 4 == 0)
    {
        printf("It is a leap year\n");
    }
    else
    {
        printf("It is not a leap year\n");
    }

}

float Energy(int kWh)
{
    float money;
        
            if(kWh <= 500 && kWh > 0)
            {
                money += kWh * 0.15;
            }
            else if(kWh > 500 && kWh <= 1000)
            {
                kWh -= 500;
                money += kWh * 0.12;
                money += 500 * 0.15;
            }
            else if(kWh > 1000 && kWh <= 2000)
            {
                kWh -= 1000;
                money += kWh * 0.14;
                money += 500 * 0.12;
                money += 500 * 0.15;
            }
            else if(kWh > 2000)
            {
                kWh -= 2000;
                money += kWh * 0.17;
                money += 1000 * 0.14;
                money += 500 * 0.12;
                money += 500 * 0.15;
            }
    
    return money;

}

int Calculator(int a, int b, char c)
{
    switch(c)
    {
        case('+'):
            return a+b;
            break;
        case('-'):
            return a-b;
            break;
        case('*'):
            return a*b;
            break;
        case('/'):
            return a/b;
            break;
        case('%'):
            return a%b;
            break;
        default:
            return 0;
    }
}

int Factorial(int n)
{
    int result = n;

    while(n > 1)
    {
        result *= n-1;
        n--;
    }
    return result;

}

void PowerTable(int range)
{
    float number = 1;
    
    char n[] = "n";
    char n2[] = "n^2";
    char n3[] = "n^3";
    char negativeN1[] = "n^-1";
    char negativeN2[] = "n^-2";
    
    printf("%s%10s%8s%14s%7s\n", n,n2,n3,negativeN1,negativeN2);
    
    for(int i = number; number <= range; number++)
    {
        printf("%-8.0f%-8.0f%-12.0f%-6.3f%f\n", number, pow(number, 2), pow(number, 3), pow(number, -1), pow(number, -2));
    }
    
}

int Addition()
{
    int result = 0;
    int i = 0;
    
    do
    {
        printf("Please input a number: ");
        scanf("%d", &i);
        result += i;
    }while(i != 0);
    
    return result;
    
}

void Stars(int rows)
{   
    int i, j;
    
    for(int i = 1; i <= rows; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}










