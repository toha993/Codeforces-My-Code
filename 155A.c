#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,max,min,ck=0,cn=0;
    int s1[10020];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&s1[i]);
    }
        max=s1[0];
       for(i=1;i<a;i++)
       {
           if(s1[i]>max)
           {
               max=s1[i];
               ck++;
           }
       }
       min=s1[0];
       for(i=1;i<a;i++)
       {
           if(s1[i]<min)
           {
               min=s1[i];
               cn++;

           }
       }
       printf("%d",ck+cn);
}