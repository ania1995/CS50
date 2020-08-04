#include <cs50.h>
#include <stdio.h>

float srednia(int lenght, int array[]);

int main(void)
{
    
    int n = get_int("Podaj liczbe ocen: ");
   
    int scores [n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Podaj %i ocene: ", i + 1);
    }

    printf(" Twoja srednia to %.2f\n", srednia(n, scores));
    
}

float srednia(int lenght, int array[])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum += array [i];
    }
    return (float) sum / (float) lenght;
}
/* for (int i=0; i< n; i++)
    {
    printf ("scores %i: %i\n",i+1,scores[i]);
    }*/
