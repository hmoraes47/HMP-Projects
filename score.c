#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get scores from user
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }
    
    //Chart scores
    for (int i = 0; i < 3; i++)
    {
        printf("Score %i: ", i + 1);
        chart(scores[i]);
    }
}
