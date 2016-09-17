#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
    int bottl=12;
    int min=0;
    printf("minutes: ");
    min = get_int();
    int bottles=0;
    bottles=min*bottl;
    printf("bottles: %d ",bottles);
}
