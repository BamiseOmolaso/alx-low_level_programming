#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Use 'putchar' function to print the alphabet in lowercase.
 * Return: 0 on success
 */
int main(void)
{
        char c = 'a';

        // Loop through the alphabet from 'a' to 'z'
        while (c <= 'z')
        {
                // Print the current character using putchar function
                putchar(c);

                // Increment the value of c by 1
                c++;
        }

        // Print a newline character after the loop completes
        putchar('\n');

        return (0);
}
