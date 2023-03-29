#include "main.h"
#include <unistd.h>

/**
 *_putchar - prints single character
 *Return: 0
 */
void _putchar(char c)
{
        write(1, &c, 1);
}
          
