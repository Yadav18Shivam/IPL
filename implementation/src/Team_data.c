#include "header.h"
#include<stdio.h>
void Team_data()
{
    FILE *fptr;
            char c;
            // Open file
            fptr = fopen("./src/Teams.txt", "r");
            // Read contents from file
            c = fgetc(fptr);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(fptr);
            }
            fclose(fptr);
}