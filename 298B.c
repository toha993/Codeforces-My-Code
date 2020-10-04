#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,c,d,e,t,ck=0,ln,x,y,z,dif=0;
    int i,j,k=1;
    char s[100005];
    scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e);
    scanf("%s",s);
    ln=strlen(s);
    if(b>d)
    {
        dif=b-d;
        for(i=0;i<ln;i++)
        {
            if(s[i] == 'W')
            {
                t=i+1;
                ck++;
                if(ck==dif)
                    break;
            }
        }
        if(ck<dif)
            {k=0;}
            ck=0;



    }
    if(c>e)
    {
        dif=c-e;
        for(i=0;i<ln;i++)
        {
            if(s[i] == 'S')
            {
                x=i+1;
                ck++;
                if(ck==dif)
                    break;
            }
        }
        if(ck<dif)
            k=0;
            ck=0;



    }
    if(c<e)
    {
        dif=e-c;
        for(i=0;i<ln;i++)
        {
            if(s[i] == 'N')
            {
                y=i+1;
                ck++;
                if(ck==dif)
                    break;
            }
        }
        if(ck<dif)
            k=0;
            ck=0;


    }
    if(b<d)
    {
        dif=d-b;
        for(i=0;i<ln;i++)
        {
            if(s[i] == 'E')
            {
                z=i+1;
                ck++;
                if(ck==dif)
                    break;
            }
        }
        
        if(ck<dif)
            k=0;
            ck=0;
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
         if(b>d && c>e)
        {
            if(t>x)
                printf("%lld",t);
            else
                printf("%lld",x);
        }
        else if(b>d && c<e)
        {
           if(t>y)
                printf("%lld",t);
            else
                printf("%lld",y);
        }
        else if(b<d && c>e)
        {
            if(z>x)
                printf("%lld",z);
            else
                printf("%lld",x);
        }
        else if(b<d && c<e)
        {
            if(z>y)
                printf("%lld",z);
            else
                printf("%lld",y);
        }
        else if(b==d && c>e)
        {
            printf("%lld",x);
        }
        else if(b==d && c<e)
        {
            printf("%lld",y);
        }
        else if(b>d && c==e)
        {
            printf("%lld",t);
        }
        else if(b<d && c==e)
        {
            printf("%lld",z);
        }
    }

















}