#include <stdio.h>
int main()
{
  double n,m,a,b,p,c[5005],temp=100000000;
  int i,j;
    scanf("%lf %lf",&n,&m);
    for(i=0;i<n;i++)
        {
            scanf("%lf %lf",&a,&b);
            c[i]=a/b;

        }

        for(i=0;i<n;i++)

        {

               {if (temp>c[i]){
                temp=c[i];}
                }}
            p=m*temp;
           printf("%.8lf",p);
}