#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string x =get_string("Input: ");
    printf("Output: ");

    for(int i = 0, n = strlen(x); i < n ; i++) // jako warunke można użyc po prostu: x[i] != '\0'
    {
        printf("%c", x[i]);
    }
    printf("\n");
    
    
}
