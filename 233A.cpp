#include<bits/stdc++.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    if(a%2==0)
        {
            for(i=2;i<=a;){
                printf("%d %d ",i,i-1);
                i=i+2;
            }

        }
    else
        printf("-1");
}