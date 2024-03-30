#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Function Declaration

int Average(int sum);

int Hours(int seconds);

int Minutes(int seconds);


int main(void)
{
    int a, b;
    
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    
    printf("Enter the second number (b): ");
    scanf("%d", &b);
    
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("a %% b = %d\n", a%b);
    
    printf("-------------------\n");
    
    int c, d, e;
    
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    
    printf("Enter the second number (b): ");
    scanf("%d", &b);
    
    printf("Enter the third number (c): ");
    scanf("%d", &c);
    
    printf("Enter the fourth number (d): ");
    scanf("%d", &d);
    
    printf("Enter the fifth number (e): ");
    scanf("%d", &e);
    
    printf("%d, %d, %d, %d, %d\n", a,b,c,d,e); //Displays the 5 numbers in the order that the user put them in all on one line
    
    printf("The sum of these numbers is %d\n", a+b+c+d+e); //Displays the sum of all the numbers
    
    int sum = a+b+c+d+e; //local sum variable
    printf("The average of these numbers is %d\n", Average(sum)); //Average Function (1)
    
    printf("-------------------\n");
    
    printf("Enter a number (a): ");
    scanf("%d", &a);
    
    int square = pow(a,2) + 0.5; //pow math function. local square variable
    printf("a^2 = %d\n", square); //Displays square of the number
    
    int cube = pow(a,3) + 0.5; //pow math function. local cube variable
    printf("a^3 = %d\n", cube); //Displays cube of the number
    
    printf("-------------------\n");
    
    printf("Enter a negative number (a): ");
    scanf("%d", &a);
    
    int absoluteValue = abs(a); //abs math function. local absolute value variable
    printf("|a| = %d\n", absoluteValue); //Displays the absolute value of the number
    
    printf("-------------------\n");
    
    printf("Enter the number of seconds: ");
    scanf("%d", &a);
    
    int sec = a; //local second variable
    
    int hours = Hours(sec); //Hours Function (2)
    sec -= hours*3600; //Reduce time by the number of hours
    
    int minutes = Minutes(sec); //Minutes Function (3)
    sec -= minutes*60; //Reduce time by the number of minutes
    
    printf("Hours = %d, Minutes = %d, Seconds = %d\n", hours, minutes, sec); //Displays Hours, Minutes, Seconds
    
    return 0;

}

int Average(int sum)
{
    return sum/5;
}

int Hours(int seconds)
{
    return seconds/3600;
}

int Minutes(int seconds)
{
    return seconds/60;
}









