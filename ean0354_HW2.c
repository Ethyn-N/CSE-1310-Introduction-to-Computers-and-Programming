#include <stdio.h>

//Function Declaration

void Astericks();
void Initials();
void Tree_Pattern();


int main(void) //Main Function
{
    printf("Ethyn Nguyen\n");
    printf("1001930354\n");
    
    printf("-------------------\n");
    
    Astericks(); //Astericks Function (1)
    
    printf("-------------------\n");
     
    Initials(); //Initials Function (2)
    
    printf("-------------------\n");
    
    Tree_Pattern(); //Tree Pattern Function (3)
            
    return 0;   
}

void Astericks()
{

//Prints out the asterick pattern line by line

    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    printf(" ****\n");
    printf("  ***\n");
    printf("   **\n");
    printf("    *\n");
    
}

void Initials()
{

//Prints out my initials in block letters

    printf(       
"EEEEEEEEEEEE                A                NNNN      NNN\nEEEEEEEEEEEE               AAA               NNNNN     NNN\nEEEE                      AA AA              NNNNNN    NNN\nEEEE                     AA   AA             NNN NNN   NNN\nEEEEEEEEEEEE            AA     AA            NNN  NNN  NNN\nEEEEEEEEEEEE           AAAAAAAAAAA           NNN   NNN NNN\nEEEE                  AAAAAAAAAAAAA          NNN    NNNNNN\nEEEE                 AA           AA         NNN     NNNNN\nEEEEEEEEEEEE        AA             AA        NNN      NNNN\nEEEEEEEEEEEE       AA               AA       NNN       NNN\n");

}

void Tree_Pattern()
{

//Prints out the tree pattern line by line

    printf("     /\\\n");                        
    printf("    /  \\\n");
    printf("   /  \' \\\n");
    printf("  /  \"   \\\n");
    printf(" /  \"   * \\\n");
    printf("/ %%    \'   \\\n");
    printf("------------\n");
    printf("    ||||\n");
    printf("    ||||\n");
    printf("    ||||\n");
    printf("    ||||\n");
    
}




