#include "header.h"
#include<stdio.h>
void stats_data()
{
FILE *fptr;
            char c;
            // Open file
            fptr = fopen("./src/stats.txt", "r");
            // Read contents from file
            c = fgetc(fptr);
            while (c != EOF)
            {
                printf ("%c", c);
                c = fgetc(fptr);
            }
            fclose(fptr);
}            