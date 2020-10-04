#include <stdio.h>
int main()
{
  int n,a,b,c;
    scanf("%d %d %d",&n,&a,&b);
    c=n-a;
    while(c>b+1)
    {
        c--;
    }
    printf("%d",c);
}