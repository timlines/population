#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size

    int startSize;

    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // Prompt for end size
  
    int endSize;

    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // Calculate number of years until we reach threshold

    int years = 0;
    int n = startSize;
   
    while (n < endSize)
    {
        n = n + (n / 3) - (n / 4);
        years++;
    }
  
    // Print number of years
    
    printf("Years: %i\n", years);

}
