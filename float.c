#include <cs50.h>
#include <stdio.h>

int main (void)
{
    float x = get_float ("x: ");
    float y = get_float ("y: ");

    printf("x/y = %.16f\n", x/y);  // %f - zwrot floatu ; %.2f - zwrot flotu z dwoma miesjcami po przecniku

    double dx = get_double ("dx: ");
    double dy = get_double ("dy: ");

    printf("dx/dy = %.16f\n", dx/dy);
}


// figlet .....
