// https://www.tutorialspoint.com/c_standard_library/ctype_h.htm

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (islower(ch)) // (ch >= 'a' && ch <= 'z') // 'A' = 65, 'a' = 97
            ch -= 'a' - 'A';
        else if (isupper(ch)) // (ch >= 'A' && ch <= 'Z')
            ch += 'a' - 'A';

        if (isdigit(ch)) // != 0
            ch = '*';
        
        putchar(ch);
    }
}