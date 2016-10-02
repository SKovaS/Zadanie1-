#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>



int main(){

        int raz;
        int size=23;
        while(true){
            printf("height : ");
       raz=get_int();
        if(raz<=size&&raz>=0){
            break;}
        }
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


     return 0;

      }


