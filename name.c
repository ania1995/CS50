#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string name[4];
    name[0] = "EMMA";
    name[1] = "RODRIGO";
    name[2] = "BRIAN";
    name[3] = "DAVID";
    
    printf("%s\n", name[2]);
    printf("%c%i%c%c%i\n", name[0][0], name[0][1], name[0][2], name[0][3], name[0][4]);
}
