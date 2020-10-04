#include<stdio.h>
#include<string.h>
int main()
{
    int a,b[105],sum=0,i;
    double c;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
         scanf("%d",&b[i]);
         sum +=b[i];
    }
    c=(double)sum/(double)a;
    printf("%.12lf",c);







}