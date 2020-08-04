#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string x =get_string("Before: ");
    printf("After: ");

    for(int i = 0, n = strlen(x); i < n ; i++) 
    {
        if ( x[i] >= 'a' && x[i] <= 'z')
        {
            printf("%c", x[i] -32);
        }
        else
        {
            printf("%c",x[i]);
        }
    }
    printf("\n");
}
