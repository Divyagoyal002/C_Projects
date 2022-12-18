#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int main()
{
    int hrs, mins, secs;
    int d = 1000;
    printf("Set Time:\n");
    scanf("%d", &hrs);
    scanf("%d", &mins);
    scanf("%d", &secs);
    if (hrs > 12 || mins > 60 || secs > 60)
    {
        printf("Invalid Time!\n");
        exit(0);
    }
    while(1)
    {
        secs++;
        if(secs>59)
        {
            mins++;
            secs=0;
        }
        if(mins>59)
        {
            hrs++;
            mins=0;
        }
        if(hrs>12)
        {
            hrs=1;
        }
        printf("\nCLOCK\t");
        printf("%02d:%02d:%02d\n",hrs,mins,secs);
        Sleep(d);
        system("cls");
    }
    return 0;
}
