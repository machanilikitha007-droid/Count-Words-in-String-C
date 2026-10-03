#include <stdio.h>
#include <string.h>

int main()
{
    char text[200];
    int words = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] != ' ' && text[i] != '\n' &&
            (i == 0 || text[i - 1] == ' '))
        {
            words++;
        }
    }

    printf("Number of words: %d\n", words);

    return 0;
}
