#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("%.0lf",ceil(a/c)*ceil(b/c));
}