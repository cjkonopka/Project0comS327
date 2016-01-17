//
//  main.c
//  Christopher_Konopka.assignment-0-part0
//
//  Created by Christopher Konopka on 1/14/16.
//  Copyright © 2016 Christopher Konopka. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void interHPFinder();
int values[50000000] = {};


int main(int argc, const char * argv[])
{
    interHPFinder();
    return 0;
}

void interHPFinder()
{
    
    values[0] = 1;
    printf("%d\n",values[0]);
    for (int i = 0; i < (50000000); i++)
    {
        int gen1 = values[i];
        if((i*2 +1) < 50000000)
        {
            values[i*2+1] = gen1;
        }
        printf("%d\n", gen1);
        
        int gen2 = values[i] + values[i+1];
        if((i*2 + 2) < 50000000)
        {
            values[i*2+2] = gen2;
        }
        
        if(i == 49999999)
        {
            break;
        }
        printf("%d\n", gen2);
    }
}

