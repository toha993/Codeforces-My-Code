#include<stdio.h>
int main()
{
    int a,b,c,i;
    char gender[50];
    scanf("%d%d",&a,&b);
    scanf("%s",gender);
    while(b--)
   {
       for(i=1;i<a;i++)
        if(gender[i]=='G' && gender[i-1]=='B')
        {
            gender[i]='B';
            gender[i-1]='G';
            i++;
        }
   }

    printf("%s",gender);

}