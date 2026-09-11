#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch))
    {
        ch = tolower(ch);

        switch (ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a Vowel", ch);
                break;

            default:
                printf("%c is a Consonant", ch);
        }
    }
    else
    {
        printf("Invalid input. Please enter a letter.");
    }

    return 0;
}
