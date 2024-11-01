#include <stdio.h>

int main()
{
    printf("Hello world\n");
    int i, age;

    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n",i);
        scanf("%d", &age);
        // if (age>10)
        // {
        //     break;
        // }

        if (age>10)
        {
            continue;
        }
        
        printf("we have not come accross any continues statements\n");
        printf("we have not come accross any continues statements\n");
        printf("we have not come accross any continues statements\n");
        printf("Rishi is good boy");
        
    }

    return 0;
}
