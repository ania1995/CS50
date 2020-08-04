#include <cs50.h>
#include <stdio.h>

void cought (int i);

int main (void)
{
  int j = get_int("ile razy kaszlnac: ");
    cought(j);
}


void cought (int n)
{
    for(int i = 0; i < n; i = i + 1)
    {
        printf ("cought\n");
    }
}

