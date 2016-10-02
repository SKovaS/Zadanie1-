#include<cs50.h> 
#include<stdio.h> 
#include <math.h> 

int main (void) 
{ 
float n = -1; 
printf("O hai! "); 
while (n < 0) 
{ 
printf("How much change is owed?\n"); 
n = GetFloat()*100; 
n = round(n);
}; 
int count = 0; 
int A[] = {25, 10, 5, 1}; 
int i=0; 
for (i = 0; i < 4; i++) 
{ 
while (n >= A[i]) 
{ 
n = n - A[i]; 
count++; 
} 
} 
printf("%d\n", count); 
}
