#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,sum=0,min=50000,max=0,ck=0,i,j,cn=0,temp,p,k;
    int s[1005],m[1005];
    scanf("%d%d",&a,&b);
    p=a;
    for(i=0;i<b;i++)
    {
        scanf("%d",&s[i]);
        sum=sum+s[i];

    }
    for(i=0;i<b-1;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        m[i]=s[i];
    }
    if(a==sum)
        {
            for(i=0;i<b;i++)
            {
                for(j=s[i];j>=0;j--)
                {
                    ck=ck+j;
                }
            }

            printf("%d %d",ck,ck);
        }
    else
    {
        for(i=0;;)
        {
            cn=cn+m[i];
            m[i]--;
            a--;
            for(k=0;k<b-1;k++)
                {
                for(j=k+1;j<b;j++)
                    {
                if(m[k]>m[j])
                    {
                temp=m[k];
                m[k]=m[j];
                m[j]=temp;
                    }
                    }
                }
            if(a==0)
            {
                break;
            }
            if(m[i]==0)
                i++;
            else
                i=i;

        }
        a=p;
        for(i=b-1;;i=b-1)
        {
            ck=ck+s[i];
            s[i]--;
            a--;
            for(k=0;k<b-1;k++)
                {
                for(j=k+1;j<b;j++)
                    {
                if(s[k]>s[j])
                    {
                temp=s[k];
                s[k]=s[j];
                s[j]=temp;
                    }
                    }
                }
            if(a==0)
            {
                break;
            }

        }
        printf("%d %d",ck,cn);
    }

}