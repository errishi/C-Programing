/*
input:
<span>       This is heading2      </span>
output:
This is heading2
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void parser(char *array)
{
    int in = 0; // variable track
    int index = 0;
    for (int i = 0; i < strlen(array); i++)
    {
        if (array[i] == '<')
        {
            in = 1; // no data collection
            continue;
        }
        else if (array[i] == '>')
        {
            in = 0; // collection data.
            continue;
        }

        // data collection
        if (in == 0)
        {
            array[index] = array[i];
            index++;
        }
    }
    array[index] = '\0'; // tell compiler for string end.

    // Remove trelling spaces from beginning
    while (array[0] == ' ')
    {
        // shift left
        for (int i = 0; i < strlen(array); i++)
        {
            array[i] = array[i + 1];
        }
    }

    // Remove trelling spaces from end.
    while (array[strlen(array) - 1] == ' ')
    {
        array[strlen(array) - 1] = '\0'; // remove
    }
}

int main()
{
    char string[] = "<span>       This is heading2      </span>";
    parser(string);
    printf("Parsed string is ~~%s~~ ",string);
    return 0;
}