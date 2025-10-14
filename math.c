/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main()
{
    double z1, z2 = 0;
    double a, d = 0;
    
    scanf("%lf %lf", &a, &d);
    
    z1 = (sin((M_PI / 2) + 3 * d)) / (1 - sin(3 * a - M_PI));
    
    z2 = 1/tan((5/4) * M_PI + (3/2) * a);
    
    printf("%lf %lf",z1,z2);
    
    return 0;
}