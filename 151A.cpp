#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,l,c,d,p,nl,np,a,b,e,f,g,min;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    a=k*l;
    b=c*d;
    e=(a/(n*nl));
    f=(b/n);
    g=(p/(np*n));
    min=e;
    if(f<min && f<=g)
        {
            min=f;
        }
    else if(f>=min && g<min)
        {
            min=g;
        }
    else if(f<=min && f>g)
        {
            min=g;
        }


    printf("%d",min);

}