/* Question-------
Dynamic memory allocation
ABC Pvt. Ltd manage employee record of other companies
Employee id can be any length and it can contain any character
For 3 employees, you have to take 'length of employee id' as input in a length integer variable
Then you have to take employee id as input and display it
Store the employee id in a character array which is allocated dynamically
you have to create only one character array dynamically

EXAMPLE:
Employee 1:
Enter the no of character in your eId
45
Dynamically allocate the character array
take input from user
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    char a,b;
    int chars, i = 0;
    while (i < 3)
    {
        printf("Employee: %d Enter the no of character in your eId:\n",i+1);
        scanf("%d", &chars);
        getchar();           //to take input of next scanf other wise skip
        printf("Enter the value of a:\n");
        scanf("%c",&a);
        getchar();
        printf("Enter the value of b:\n");
        scanf("%c",&b);
        ptr = (char*)malloc((chars+1)*sizeof(char));      //chars+1 because it is char datatype then we add 1 extra.
        printf("Enter your employee Id:\n");
        scanf("%s",ptr);
        printf("Your employee ID is %s\n",ptr);
        free(ptr);
        i++;
    }
    return 0;
}