#include<stdio.h>
#include<string.h>
int main()
{
    int l,l1,l2,l3,ck=1;
    char s[105],s1[105],s2[105],s3[205],i,j;
    gets(s1);
    gets(s2);
    gets(s);
    l=strlen(s);
    l1=strlen(s1);
    l2=strlen(s2);
    strcat(s1,s2);
    strcpy(s3,s1);
    l3=strlen(s3);
    if(l==l3)
    {
        for(i=0;i<l3;i++)
        {
            for(j=0;j<l;j++)
            {
                if(s3[i]==s[j])
                        {
                            s3[i]='0';
                            s[j]='0';
                            ck=0;
                            break;
                        }
            }
        }
        for(i=0;i<l3;i++)
        {

            if(s3[i] != '0')
                {ck=1;
                break;}

        }
        if(ck==0)
            printf("YES");
        else
            printf("NO");

    }
    else
            printf("NO");

}