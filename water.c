#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main()
{
    int consumption=12;
    int min=0;
    printf("minutes: ");
    min = get_int();
    int bottles=0;
    bottles=min*consumption;
    printf("bottles: %d ",bottles);
}
