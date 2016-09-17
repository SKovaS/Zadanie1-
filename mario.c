#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>



int main(){
        loop:printf("height : ");
        int raz;
        int size=23;
       raz=get_int();
        if(raz>size||raz<0){
            goto loop;}
            else{
        int q;
        int j = 0;
        int i = 0;
        for(i=0;i<raz;i++)
        {
        for(q=raz;q>i+1;q--)
        {
        printf(" ");
        }
        for(j=0;j <i+2;j++){
        printf("#");
        }
        printf("\n");

        }
        }


     return 0;

      }

