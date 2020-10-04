#include<stdio.h>
int main()
{
    int a[10][10],i,j,p,q,sum=0;;
    for(i=1;i<6;i++)
    {
       for(j=1;j<6;j++)
        scanf("%d",&a[i][j]);
    }

        for(i=1;i<6;i++)
          {
            for(j=1;j<6;j++)
                if(a[i][j]==1)
                   {
                    p=i;
                    q=j;
                    break;
                   }
    }

        if(p<=5)
        {if (p > 3)
            p=p-3;
        else if(p<3)
            p=3-p;
        else
            p=0;
        }
        if(q<=5)
        {
        if(q > 3)
            q=q-3;
        else if(q<3)
            q=3-q;
        else
            q=0;
        }
        sum=p+q;
        printf("%d\n",sum);

}