/*
create a menu for conversion

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters
and others

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int choice;
    float num;
    // Main Menu
    while (true)
    {
        printf("\n---Main Menu---\n");
        printf("1.kms to miles\n");
        printf("2.inches to foot\n");
        printf("3.cms to inches\n");
        printf("4.pound to kgs\n");
        printf("5.inches to meter\n");
        printf("6.meter to cms\n");
        printf("7.mm to cms\n");
        printf("8.meter to angstrom\n");
        printf("9.Exit\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number:");
            scanf("%f", &num);
            printf("\n%0.0f kms = %0.3f miles\n", num, num * 0.6213712);
            break;

        case 2:
            printf("Enter number:");
            scanf("%f", &num);
            printf("\n%0.0f inche = %0.3f foot\n", num, num * 0.08333333);
            break;
        
        case 3:
            printf("Enter number:");
            scanf("%f", &num);
            printf("\n%0.0f cm = %0.3f inches\n", num, num *0.3937008);
            break;

        case 4:
            printf("Enter number:");
            scanf("%f", &num);
            printf("\n%0.0f pound = %0.3f kgs\n", num, num *0.4535924);
            break;

        case 5:
            printf("Enter number:");
            scanf("%f", &num);
            printf("\n%0.0f inches = %0.3f meter\n", num, num *0.0254);
            break;

        case 6:
            printf("Enter number:");
            scanf("%f", &num);
            printf("\n%0.0f meter = %0.3f cm\n", num, num *100);
            break;

        case 7:
            printf("Enter number:");
            scanf("%f", &num);
            printf("\n%0.0f mm = %0.3f cm\n", num, num *0.1);
            break;

        case 8:
            printf("Enter number:");
            scanf("%f", &num);
            printf("\n%0.0f meter = %0.3f angstrom\n", num, num *10000000000);
            break;

        case 9:
            printf("Close.....!!");
            exit(0);       // we also use goto end statement.
        }
    }

    return 0;
}