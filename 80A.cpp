#include<stdio.h>
#include<string.h>
int main()
{
    int i,a,b,j,n;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b;i++)
    {
        for(j=2;j<=i/2;)
           {
            if(i%j==0)
                {i++;
                j=2;
                }
            else
                j++;
           }
            if(i==b)
                {
                    printf("YES");
                }
            else
                   {
                       printf("NO");
                       break;
                   }


    }

}