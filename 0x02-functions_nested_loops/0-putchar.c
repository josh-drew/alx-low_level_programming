#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char c[] = "_putchar\n";

  int i = 0;

  while (c[i] != '\0')
    {
      _putchar(c[i]);
      i++;
    }

  return (0);
}
