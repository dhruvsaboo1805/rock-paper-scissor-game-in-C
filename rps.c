#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomcharacter(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{

    // void player1();
    int prateek_score = 0, rishabh_score = 0, C_score = 0;
    int choice, var, name, score;
    char *ptr;
    int i = 0;
    while (i <= 3)
    {
        printf("press '0' for the rock\n");
        printf("press '1' for the paper\n ");
        printf("press '2' for the scissor\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
        {
            printf("computer's turn\n");
            srand(time(NULL));
            var = rand() % 3;
            printf("%d\n", var);
            if (choice == 0 && var == 1)
            {
                printf("%s wins\n", &name);
                prateek_score++;
            }
            else if (choice == 0 && var == 0)
            {
                printf("computer wins\n");
                C_score++;
            }
            else if (choice == 0 && var == 2)
            {
                printf("its a tie\n");
                prateek_score++;
                rishabh_score++;
            }

            break;
        }
        case 1:
        {
            printf("computer's turn\n");
            srand(time(NULL));
            var = rand() % 3;
            printf("%d\n", &var);
            if (choice == 1 && var == 2)
            {
                printf("%s wins\n", &name);
                rishabh_score++;
            }
            else if (choice == 1 && var == 0)
            {
                printf("Computer wins\n");
                C_score++;
            }
            else if (choice == 1 && var == 1)
            {
                printf("A tie\n");
                prateek_score++;
                C_score++;
            }
            break;
        }
        case 2:
        {
            printf("Computers turn\n");
            srand(time(NULL));
            var = rand() % 3;
            printf("%d\n", var);
            if (choice == 2 && var == 1)
            {
                printf("%s wins\n", &name);
                rishabh_score++;
            }
            else if (choice == 2 && var == 2)
            {
                printf("Computers wins \n");
                C_score++;
            }
            else if (choice == 2 && var == 0)
            {
                printf("Its a tie\n");
                C_score++;
                prateek_score++;
                rishabh_score++;
            }

            break;
        }

        default:
            printf("The invalid choice choose again\n");
        }

        printf("The score of prateek is %d\n", prateek_score);
        printf("The score of rishabh is %d\n ", rishabh_score);
        printf("The score of computer is %d\n", C_score);

        i++;
        if (prateek_score > C_score)
        {
            printf("%s wins the match\n");
        }
        else if (rishabh_score < C_score)
            ;
        {
            printf(" computer wins the match\n");
        }
    }

    return 0;
}