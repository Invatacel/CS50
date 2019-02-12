#include <cs50.h>
#include <stdio.h>

//Ask user for the height of the piramid - see at the end
int get_height(string prompt);

int main(void)
{
    int height = get_height("What is the height: ");
    // Loop for how many rows does the piramid have
    for (int row = 0; row < height; row++)                
    {
        // Loop for dots before the hashes - need to left one space for hash
         for (int dot = (height - row); dot > 1; dot--)    
            {
                printf(" ");
            }
            // Loop for filling the hashes - bricks
            for (int brick = 0; brick <= row; brick++)
            {
               printf("#");
            }
            printf("\n");
    }
}

// Ask user for the height
int get_height(string prompt)
{
    int height;
    do
    {
        height = get_int("%s", prompt);
    }
    while (height < 1 || height > 8);
    return height;
}
