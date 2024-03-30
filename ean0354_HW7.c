#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define TRUE 1
#define FALSE 0
#define LENGTH 10

int Duplicates(int n[]);
void Invert(int n[5][5]);
void Barcode();

int main()
{

    int numbers[LENGTH];
    int i = 0;
    
    int result;
    
   
    for(i = 0; i < LENGTH; i++)
    {
	printf("Input number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    result = Duplicates(numbers);
    
    if(result == TRUE)
    {
        printf("There are duplicate values.\n");
    }
    else if(result == FALSE)
    {
        printf("All unique values\n");
    }
    
    printf("--------------\n");
    
    int array[5][5] = { {183, 226, 180, 117, 222},
                        {193, 188, 0, 124, 52},
                        {46, 157, 214, 49, 246},
                        {1, 78, 167, 143, 204},
                        {98, 175, 159, 152, 248} };

    Invert(array);
    
    printf("--------------\n");
   
    Barcode();

}

int Duplicates(int n[])
{
    int i, j;

    for(i = 0; i < LENGTH; i++)
    {
        for(j = i + 1; j < LENGTH; j++)
        {
            if(n[i] == n[j])
            {
                return TRUE;
            }
        }
    }
    
    return FALSE;
}

void Invert(int n[5][5])
{
    int i, j;

    int array[5][5];
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            array[i][j] = 255 - n[i][j];
        }
    }
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
}


void Barcode()
{
    int i;
    int barcode;
    int barcodeArray[10];
    
    float price;
    float priceArray[10];
    
    float total;


    for(i = 0; i < 10; i++)
    {
        printf("Enter UPC #%d: ", i + 1);
        scanf("%d", &barcode);
        barcodeArray[i] = barcode;   
        
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &price);
        priceArray[i] = price; 
    }
    
    printf("\nItem Code          Price\n");
    
    for(i = 0; i < 10; i++)
    {
        printf("%-19d", barcodeArray[i]);
        
        printf("%-15.2f ", priceArray[i]);
        total += priceArray[i];
  
        printf("\n");
    }
    
    printf("\nTotal Amount: %.2f\n", total);
       
}










