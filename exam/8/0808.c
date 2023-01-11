#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
int get_integer(void);
void count(void);

int main()
{
    // char choice;
    // int i, count;

    // while (1)
    // {
    //     printf("Enter the letter of your choice :\n");
    //     printf("a. avengers\tb. beep\n");
    //     printf("c. count\tq. quit\n");

    //     choice = getchar();

    //     switch (choice)
    //     {
    //         case 'a': case 'A':
    //             printf("Avengers assemble!\n");
    //             break;
    //         case 'b': case 'B':
    //             printf("bbbbbbbbbbbbb\n");
    //             break;
    //         case 'c': case 'C':
    //             scanf("%d", &i);

    //             for (count = 1; count < i; count++)
    //             {
    //                 printf("%d\n", count);
    //             }
    //             break;
    //         case 'q': case 'Q':
    //             break;
    //     }
    // }

    int user_choice;

    get_choice();

    while ((user_choice = getchar()) != 'q')
    {
        switch (user_choice)
        {
            case 'a':
                printf("Avengers assemble\n");
                break;
            case 'b':
                putchar('\a');
                break;
            case 'c':
                count();
                break;
            default :
                printf("Error with %d.\n", user_choice);
                exit(1);
                break;
        }
    }

    return 0;
}

char get_choice(void)
{
    int user_input;

    printf("Enter the letter of your choice :\n");
    printf("a. avengers\tb. beep\n");
    printf("c. count\tq. quit\n");

    user_input = get_first_char();

    while ((user_input < 'a' || user_input > 'c') && user_input != 'q')
    {
        printf("Please try again.\n");
        user_input = get_first_char();
    }

    return user_input;
}

char get_first_char(void)
{
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;
    
    return ch;
}

int get_integer(void)
{
    int i;
    char c;

    while (scanf("%d", &i) != 1)
    {
        while((c = getchar()) != '\n')
            putchar(c);
        printf(" is not an integer.\nPlease try again.");
    }

    return i;
}