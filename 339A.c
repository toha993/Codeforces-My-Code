#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,temp,l;
    char s[105];
    gets(s);
    l=strlen(s);
    for(i=0; i<l ;i=i+2)
    {
        for(j=0; j<l-i-2 ;j=j+2)
        {
            if(s[j]>s[j+2])
        {
            temp=s[j];
            s[j]=s[j+2];
            s[j+2]=temp;
        }
    }
    }
        puts(s);
}