/*
input:
<h1>       This is heading      </h1>
output:
This is heading
*/

#include <stdio.h>
#include <string.h>

void parser(char *array)
{
    int in = 0; // variable to track whether we are inside the tags.
    int index = 0;
    for (int i = 0; i < strlen(array); i++)
    {
        if (array[i] == '<')
        {
            in = 1;   // because we not collect data after this
            continue; // for move next inside it.
        }
        else if (array[i] == '>')
        {
            in = 0;    //because we have to collect data after this
            continue;
        }
        //data collection.
        if (in == 0)
        {
            array[index] = array[i];
            index++;
        }
    }
    array[index] = '\0'; // tell compiler for string end

    // Remove trailing spaces from beginning
    while (array[0] == ' ')
    {
        // shift string to left
        for (int i = 0; i < strlen(array); i++)
        {
            array[i] = array[i + 1];
        }
    }
    //Remove trailing space from end.
    while (array[strlen(array) - 1] == ' ')
    {
        array[strlen(array) - 1] = '\0';
    }
}

int main()
{
    char string[] = "<h1>        This is heading       </h1>";
    parser(string);
    printf("The parsed string is ~~%s~~", string);
    return 0;
}