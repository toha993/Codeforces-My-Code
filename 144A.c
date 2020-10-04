#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,temp,j=0,max=0,location=1,min=0,lctn=1;
    int height[100];
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&height[i]);
    }
        max=height[1];
        for(i=2;i<=a;i++)
        {
            if (height[i] > max)
        {
            max  = height[i];
            location = i;
        }
       }
        min=height[1];
        for(i=2;i<=a;i++)
        {
            if (height[i] <= min)
        {
            min  = height[i];
            lctn = i;
        }
        }
       if(location>lctn)
        printf("%d",(location-1)+(a-lctn)-1);
        else
        printf("%d",abs(1-location)+(a-lctn));

}