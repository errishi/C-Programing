# include <stdio.h>
# include "L-54Dangling_ptr.c"         //use to connect other file
# define PI 3.14              //macros use by define
# define SQUARE(r) r*r

int main()
{
    float var = PI;
    int r = 4;
    int *ptr = FunctionDangling();
    printf("The value of PI is %f\n",var);
    printf("The area of the circle is %f\n",PI * SQUARE(r));
    return 0;
}