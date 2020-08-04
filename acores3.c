#include <cs50.h>
#include <stdio.h>

int main (void)
{
    
   int n =get_int("Podaj liczbe ocen: ");
   
   int scores [n];

    for(int i=0; i< n; i++)
    {
        scores[i]= get_int("Podaj %i ocene: ", i);
    }

     for(int i=0; i< n; i++)
    {
        printf ("scores %i: %i\n",i ,scores[i]);
    }
    
}
