#include <cs50.h>
#include <stdio.h>

const int N = 4;

int main (void)
{
    
    int scores [N];
    scores [0]=5;
    scores [1]=7;
    scores [2]=9;
    scores [3]=11;
    
    for(int i=0; i< 4; i++)
    {
        printf ("scores %i: %i\n",i ,scores[i]);
    }
    
}
