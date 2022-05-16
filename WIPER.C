#include <stdio.h>
#include <stdlib.h>

int main()
{
    int engine,wipersignal,pot;
    char on,low,medium,fast,servmotor;
    {
    printf("engine state: ");
    scanf("%d",&engine);
    if(engine==1)
    {while(1){
        printf("wiper state: ");
        scanf("%d",&wipersignal);
        if(wipersignal==1)
        {
            printf("pot: ");
            scanf("%d",&pot);
            if(pot>100&&pot<250)
            {
                printf("wiper-speed = 25% \n");
            }
            else if(pot>250&&pot<500)
            {
                printf("wiper-speed = 50% \n");
            }
            else if(pot>=500)
            {
                printf("wiper-speed = 75% \n");
            }
            else
            {
                printf("no wiper movement\n");
            }
        }
        else
        {
            printf("switch on the wiper signal\n");
        }
        }
    }
        else
        {
            printf("switch on the engine\n");
        }
    }
    }
