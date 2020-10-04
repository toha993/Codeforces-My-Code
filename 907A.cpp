#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,ck=0;;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(2*c>=d)
    {
        for(i=1;i<=200;i++)
        {
          if(i>2*d && i>=b && i>2*c && i<=2*b)
          {
              b=i;
              break;
          }
          if(i>2*b)
          {
              ck=1;
              break;
          }
        }
        for(i=1;i<=200;i++)
        {
          if(i>2*d && i>=a && i>b & i !=b && i<=2*a)
          {
              a=i;
              break;
          }
          if(i>2*a)
          {
              ck=1;
              break;
          }
        }
        for(i=1;i<=100;i++)
        {
          if(i<=2*d && i>=d && i>=c && i !=b && i !=a)
          {
              c=i;
              break;
          }
          if(i==a || i==b)
          {
              ck=1;
              break;
          }
        }
        if(ck==0)
            printf("%d\n%d\n%d",a,b,c);
        else
            printf("-1");
    }
    else
    {
            printf("-1");
    }
}