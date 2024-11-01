#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Driver_Details
{
    char Name[100];
    char DL_Number[30];
    char Route[100];
    int kms;
} Driver;

int main()
{
    Driver *dr;
    int n;
    printf("Enter the number of drivers to add record:");
    scanf("%d", &n);
    
    // for input
    for (int i = 0; i < n; i++)
    {
        printf("The record of %d Driver\n",i+1);
        printf("Enter Driver Name:");
        scanf("%s",dr[i].Name);
        printf("Enter Driving Licence No:");
        scanf("%s", &dr[i].DL_Number);
        printf("Enter your route:");
        scanf("%s", &dr[i].Route);
        printf("Enter your travel distance:");
        scanf("%d", &dr[i].kms);
    }
    //for print
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("The records of %d\n",i+1);
        printf("Name = %s\n",dr[i].Name);
        printf("Driving Licence = %s\n",dr[i].DL_Number);
        printf("Route Name = %s\n",dr[i].Route);
        printf("Distance Travel = %d\n",dr[i].kms);
    }
    return 0;
}