#include <stdio.h>

//Predefine macros and other predefined
int main()
{
    printf("Today Date is %s\n",__DATE__);
    printf("The File Name is %s\n",__FILE__);
    printf("Today's Time is %s\n",__TIME__);
    printf("Line Number is %d\n",__LINE__);
    printf("ANSI :%d\n",__STDC__);
    return 0;
}