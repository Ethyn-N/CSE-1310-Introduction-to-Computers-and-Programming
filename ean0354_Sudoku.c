#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0


int Row(int array[9][9], int row);
int Column(int array[9][9], int column);
int Square(int array[9][9], int square);



int main()
{
    int array[9][9];
    
    FILE *fp;
    
    char c;
    
    int i, j;
    
    
    if((fp = fopen("sudoku_correct.txt", "r")) == NULL)
        exit(0);
    //if((fp = fopen("sudoku_row.txt", "r")) == NULL)
        //exit(1);
    //if((fp = fopen("sudoku_column.txt", "r")) == NULL)
        //exit(2);
    //if((fp = fopen("sudoku_square.txt", "r")) == NULL)
        //exit(3);
    

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            fscanf(fp, "%d", &array[i][j]);
        }
    }
     
    int wrongRow = FALSE;
    for(i = 0; i < 9; i++)
    {
        if(Row(array, i) == FALSE)
        {
            printf("Row %d is incorrect\n", i + 1);
            wrongRow = TRUE;
        }
        
    }
    if(wrongRow == TRUE)
        return 1;
    
    int wrongColumn = FALSE;
    for(i = 0; i < 9; i++)
    {
        if(Column(array, i) == FALSE)
        {
            printf("Column %d is incorrect\n", i + 1);
            wrongColumn = TRUE;
        }
        
    }
    if(wrongColumn == TRUE)
        return 2;
    
    int wrongSquare = FALSE;
    for(i = 1; i < 10; i++)
    {
        if(Square(array, i) == FALSE)
        {
            printf("Square %d is incorrect\n", i);
            wrongSquare = TRUE;
        }
        
    }
    if(wrongSquare == TRUE)
        return 3;
    

    for(i = 0; i < 9; i++)
    {
        for(j = 0; j < 9; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    fclose(fp);
    
    return 0;

}

int Row(int array[9][9], int row)
{
    int i, j;
    
    if(array[row][8] < 0 || array[row][8] > 9)
        return FALSE;

    for(i = 0; i < 9; i++)
    {  
        for(j = i+1; j < 9; j++)
        {
            if(array[row][i] < 0 || array[row][i] > 9)
            {
                return FALSE;
            }
            
            if(array[row][i] == array[row][j])
            {
                return FALSE;
            }
        }
    }
    
    return TRUE;
}

int Column(int array[9][9], int column)
{
    int i, j;
    
    if(array[8][column] < 0 || array[8][column] > 9)
        return FALSE;

    for(i = 0; i < 9; i++)
    {  
        for(j = i+1; j < 9; j++)
        {
            if(array[i][column] < 0 || array[i][column] > 9)
            {
                return FALSE;
            }
            
            if(array[i][column] == array[j][column])
            {
                return FALSE;
            }
        }
    }
    
    return TRUE;
}

int Square(int array[9][9], int square)
{
    int row, column, lowRow, lowColumn;
    int i, j = 0;
    int squareArray[9];
    
    switch (square)
    {
        case 1: case 2: case 3: lowRow = 0;  break;
        case 4: case 5: case 6: lowRow = 3; break;
        case 7: case 8: case 9: lowRow = 6; break;
        default: exit(3);
    }
    
    switch (square)
    {
        case 1: case 4: case 7: lowColumn = 0;  break;
        case 2: case 5: case 8: lowColumn = 3; break;
        case 3: case 6: case 9: lowColumn = 6; break;
	default: exit(3);
    }

    int x = 0;
    for(row = lowRow; row < lowRow + 3; row++)
    {
        for(column = lowColumn; column < lowColumn + 3; column++)
        {
            squareArray[x++] = array[row][column];
        }
    }
    

    for(i = 0; i < 9; i++)
    {
        if(squareArray[i] < 0 || squareArray[i] > 9)
            return FALSE;
        for(j = i + 1; j < 9; j++)
        {
            if(squareArray[i] == squareArray[j])
            {
                return FALSE;
            }
        }
    }

    return TRUE;
}





