/*write a program to manage a travel agency and you want your n drivers to input their following details
1. Name
2. Driving Licence
3. Route
4. KMS
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

your program should print details of the drivers in the beautiful fashion
using structure*/

#include<stdio.h>
#include<string.h>

typedef struct Driver_Details{
    char Name[100];
    char DL_Number[30];
    char Route[100];
    int kms;
}Driver;

int main()
{
    Driver d1,d2,d3;
    printf("Enter Driver Name:");
    scanf("%s",&d1.Name);
    printf("Enter Driving Licence No:");
    scanf("%s",&d1.DL_Number);
    printf("Enter your route:");
    scanf("%s",&d1.Route);
    printf("Enter your travel distance:");
    scanf("%d",&d1.kms);

    printf("Enter Driver Name:");
    scanf("%s",&d2.Name);
    printf("Enter Driving Licence No:");
    scanf("%s",&d2.DL_Number);
    printf("Enter your route:");
    scanf("%s",&d2.Route);
    printf("Enter your travel distance:");
    scanf("%d",&d2.kms);

    printf("Enter Driver Name:");
    scanf("%s",&d3.Name);
    printf("Enter Driving Licence No:");
    scanf("%s",&d3.DL_Number);
    printf("Enter your route:");
    scanf("%s",&d3.Route);
    printf("Enter your travel distance:");
    scanf("%d",&d3.kms);

    //printing the detail of driver
    printf("\n");
    printf("The Detail of 1st driver\n");
    printf("Driver Name is %s\n",d1.Name);
    printf("Driver Driving Licence is %s\n",d1.DL_Number);
    printf("Driver Route is %s\n",d1.Route);
    printf("Driver Travel Distance is %d\n",d1.kms);
    printf("\n");
    printf("The Detail of 2nd driver\n");
    printf("Driver Name is %s\n",d2.Name);
    printf("Driver Driving Licence is %s\n",d2.DL_Number);
    printf("Driver Route is %s\n",d2.Route);
    printf("Driver Travel Distance is %d\n",d2.kms);
    printf("\n");
    printf("The Detail of 3rd driver\n");
    printf("Driver Name is %s\n",d3.Name);
    printf("Driver Driving Licence is %s\n",d3.DL_Number);
    printf("Driver Route is %s\n",d3.Route);
    printf("Driver Travel Distance is %d\n",d3.kms);

    return 0;
}