 #include "header.h"
#include<stdio.h>
void stats_player_data()
{
 printf("\nstats of players in categories as follows select as you want:");
            printf("\n1.Most runs.");

            printf("\n2.Most wickets");
            printf("\n3.Players with Purple cap");
            printf("\n4.Players with orange cap\n");
            int stats_player=0;
            scanf("%d",&stats_player);

            switch (stats_player)
            {

            case 1:
            {

                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("./src/mostruns.txt", "r");
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
                fptr = fopen("./src/mostwickets.txt", "r");
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
                fptr = fopen("./src/purple.txt", "r");
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
                fptr = fopen("./src/orange.txt", "r");
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