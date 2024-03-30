#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    FILE *fp2;
    FILE *fp3;
    
    char str[15][15];
    char s[15];
    char c;
    
    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0;
    int i, j;
    int NUM_OF_WORDS;
    
    fp = fopen("ean0354.txt", "w");
    if(fp == NULL)
    {
        return 1;
    }
    fprintf(fp, "Ethyn Nguyen\n");
    fclose(fp);
    
    fp = fopen("ean0354.txt", "a");
    if(fp == NULL)
    {
        return 2;
    }
    fprintf(fp, "1001930354\n");
    fclose(fp);
    
    fp = fopen("ean0354.txt", "r");
    if(fp == NULL)
    {
        return 3;
    }
    while((c=fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    
    printf("--------------\n");
    
    fp = fopen("Part2.txt", "r");
    if(fp == NULL)
    {
        return 4;
    }
    
    while((c=getc(fp)) != EOF)
    {    
        characters++;
    
        if(c == ' ' || c == '\n' || c == 't')
        {
            if(in_word)
            {
                in_word = 0;
                words++;
            }
        }
        
        if(c == '\n' || c == '\0')
        {
            lines++;
        }
        else
        {
            in_word = 1;
        }
   
    }
    
    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);
    fclose(fp);
    
    fp = fopen("Part3_1.txt", "r");
    if(fp == NULL)
    {
        return 5;
    }
    fp2 = fopen("Part3_2.txt", "r");
    if(fp2 == NULL)
    {
        return 6;
    }
    
    fp3 = fopen("Part3_3.txt", "w");
    
    c = fgetc(fp);
    while(c != EOF)
    {
        fputc(c, fp3);
        c = fgetc(fp);
    }
    
    c = fgetc(fp2);
    while(c != EOF)
    {
        fputc(c, fp3);
        c = fgetc(fp2);
    }
    
    fclose(fp3);
    
    fp3 = fopen("Part3_3.txt", "r");
    
    while(fgets(str[i], sizeof(str[i]), fp3))
    {
       i++;
       NUM_OF_WORDS++;
       
    }
    for(i = 0; i < NUM_OF_WORDS; i++)
    {
        for(j = i + 1; j < NUM_OF_WORDS; j++)
        {
            if(strcmp(str[i], str[j]) > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], s);
            }
        }
    }
    
    fclose(fp3);
    fp3 = fopen("Part3_3.txt", "w");
    
    for(i = 0; i < NUM_OF_WORDS; i++)
    {
        fprintf(fp3, "%s", str[i]);
    } 
    
    
    fclose(fp);
    fclose(fp2);
    fclose(fp3);
    
    
    return 0;
    
}
