#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,ck=0,cn=0,cp=0,cm=0;
    int s1[10020],s2[10020];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&s1[i],&s2[i]);
    }
        for(i=0;i<a;i++)
        {
        if(s1[i]==0)
            ck++;
        else
            cn++;
        }

        for(i=0;i<a;i++)
        {
        if(s2[i]==0)
            cp++;
        else
            cm++;
        }
        if(ck>cn)
        {
            if(cp>cm)
            printf("%d",cn+cm);
            else
               printf("%d",cn+cp);
        }
        else
            {
            if(cp>cm)
            printf("%d",ck+cm);
            else
               printf("%d",ck+cp);
        }
}