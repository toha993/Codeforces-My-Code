#include <stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d\n%d\n%d",&a,&b,&c);
    for(i=a;i>=1;i--)
    if(b >= 2*i && c >= 4*i)
        break;
        printf("%d\n",7*i);
}