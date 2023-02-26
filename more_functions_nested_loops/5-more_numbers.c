#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void)
{
    int i = 0, j = 0;

    while (j < 10) {
        i = 0;
        while (i <= 14) {
            if (i > 9) {
                _putchar(i / 10 + '0');
            }
            _putchar(i % 10 + '0');
            i = i + 1;
        }
        _putchar('\n');
        j = j + 1;
    }
}
