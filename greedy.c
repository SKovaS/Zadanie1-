#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cs50.h>

int main()
{
    int mas[]={25,10,5,1};
    float n=-1;
    int count=0;
    while(n<0){
        printf("O hai! How much change is owed?\n");
    n=get_float();
    n=n*100;
    n=round(n);
    }
    int i=0;
    for(i=0;i<4;i++){
    while(n>=mas[i]){
    n=n-mas[i];
        count++;}
    }
    printf("%d\n",count);
    }

