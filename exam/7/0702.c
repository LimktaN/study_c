#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char ch;

    // ch = getchar();
    // putchar(ch);

    // printf("%i", 'a' - 'A'); // 32

    while((ch = getchar()) != '\n')
    {
        // if (ch == 'F') {
        //     ch = 'X';
        // } else if (ch == 'f') {
        //     ch = 'x';
        // }

        // if (ch >= '0' && ch <= '9') // && == and
        //     ch = '*';

        if (ch >= 'a' && ch <= 'z')
        { 
            ch -= 32; // == ch -= 'a' - 'A'
        } else if (ch >= 'A' && ch <= 'Z')
        {
            ch += 32; // == ch += 'a' - 'A'
        }

        putchar(ch);
        // ch = getchar();
    }

    putchar(ch);

    return 0;
}