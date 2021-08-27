#include<stdio.h>
#include "header.h"
void all_player()
{
     printf("\n\nenter the the team of which you want see the members of :");
            printf("\n 1.CSK\n 2.DC\n 3.KX1P\n 4.KKR\n 5.MI\n 6.RR\n 7.RCB\n 8.SH\n");
            int team_name=0;
            scanf("%d",&team_name);
            switch(team_name)
            {
            case 1:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("./src/csk.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 2:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("./src/dc.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 3:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("./src/kxp.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 4:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("./src/mi.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 5:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("./src/rr.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 6:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("./src/rcb.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
            case 7:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("./src/sh.txt", "r");
                // Read contents from file
                c = fgetc(fptr);
                while (c != EOF)
                {
                    printf ("%c", c);
                    c = fgetc(fptr);
                }
                fclose(fptr);
                break;

            }
}
}