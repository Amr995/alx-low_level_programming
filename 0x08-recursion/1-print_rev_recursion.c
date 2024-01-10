#include "main.h"
#include <string.h>

void _print_rev_recursion(char *s)
{
        char *ReversedStr = "";
        short FromEnd = strlen(s);

        for (int i = 0; i <= strlen(s)-1; i++)
        {
                ReversedStr += s[FromEnd];
                FromEnd--;
        }
        ReversedStr += '\0';

        if (ReversedStr != '\0')
        {
                _putchar(*ReversedStr);
                _print_rev_recursion(ReversedStr - 1);
        }
        else
                _putchar('\n');
}
