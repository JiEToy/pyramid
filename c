// import library from cs50, the course I'm doing(get_int comes from this)
#include <cs50.h>
#include <stdio.h>

int main(void)
{
// keep prompting user to input height, until correct

    int height;
    do
    {
        height = get_int("Give a number between 0 and 23 inclusive  ");
    }
    while (height < 0 || height > 23);

// define number of rows needed
    for (int i = 0; i < height; i++)
    {
        // print spaces for left pyramid
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        // print # for left pyramid
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        // print gap
        {
            printf("  ");
        }
        // print hashes for right pyramid
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }
        // print new line
        {
            printf("\n");
        }

    }
}
