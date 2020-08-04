#include <cs50.h>
#include <stdio.h>


int main (void)
{
    int n = get_int("Jaka szerokosc: ");
    int m = get_int (" Jaka wysokosc: ");

    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
