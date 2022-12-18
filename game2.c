#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// declaration: telling the compiler about the variable,no space reserved for it
// definition: declarartion + space reserved.
int generate_random_num(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib
    return rand() % n;
}
int points(int player_1, int player_2)
{
    int p1 = 0, p2 = 0;
    if (player_1 == 0)
    {
        if (player_2 == 0)
        {
            printf("SAME CHOISE\n");
        }
        else if (player_2 == 1)
        {
            printf("computer +1\n");
            p2=p2+1;
        }
        else if(player_2 == 2)
        {
            printf("player +1\n");
            p1=p1+1;
        }
    }
    else if (player_1 == 1)
    {
        if (player_2 == 0)
        {
            printf("player +1\n");
            p1=p1+1;
        }
        else if (player_2 == 1)
        {
            printf("SAME CHOISE\n");
        }
        else if (player_2 == 2)
        {
            printf("computer +1\n");
            p2=p2+1;
        }
    }
    else if (player_1 == 2)
    {
        if (player_2 == 0)
        {
            printf("computer +1\n");
            p2=p2+1;
        }
        else if (player_2 == 1)
        {
            printf("player +1\n");
            p1=p1+1;
        }
        else
        {
            printf("SAME CHOICE!!!\n");
        }
    }
    return p1, p2;
}
int results(int p1, int p2)
{

    if (p1 > p2)
    {
        printf("player 1 wins the game\n\n");
    }
    else if (p1 = p2)
    {
        printf(".......GAME DRAW......\n\n");
    }
    else if (p1<p2)
    {
        printf("computer wins the game\n\n");
    }
    return 0;
}
int main()
{
    int player_1, player_2, p1 = 0, p2 = 0, select;

label:
    printf("..........SELECT............\n1:PLAY \t\t 0: EXIT\n");
    scanf("%d", &select);
    switch (select)
    {
    case 1:
        for (int i = 0; i < 3; i++)
        {
            printf("0:Stone\t1:paper\t2:scissors\n");
            scanf("%d", &player_1);
            printf("Player :%d\n", player_1);
            printf("Computer:%d\n", generate_random_num(2));
            player_2 = generate_random_num(2);
            points(player_1, player_2);
        }
        printf("*******FINAL RESULT*******\n");
        results(p1, p2);
        break;
    case 0:
        exit(0);
    }
    goto label;
    return 0;
}