//
//  main.c
//  Christopher_Konopka.assignment-0-part1
//
//  Created by Christopher Konopka on 1/14/16.
//  Copyright © 2016 Christopher Konopka. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void findRationalNum(int);
int recursive(int);
int values[50000000] = {};

int main(int argc, const char * argv[])
{
    if(argc != 2)
    {
        printf("need correct arguements\n");
        return -1;
    }
    int arguement;
    arguement = atoi(argv[1]);
    findRationalNum(arguement);
    return 0;
}

void findRationalNum(int n)
{
    int num = recursive(n);
    int den = recursive(n+1);
    printf("the rational number is %d/%d" "\n", num,den);
}

int recursive(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n%2 != 0)
    {
        return recursive((n-1)/2);
    }
    else
    {
        return recursive((n-2)/2) + recursive(((n-2)/2)+1);
    }
}
