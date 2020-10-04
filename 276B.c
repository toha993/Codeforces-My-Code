#include<stdio.h>
#include<string.h>
int main()
{
   char a[1005];
   int i,ln,ck=0;
   int cnt[26]= {0};
   scanf("%s",a);
   ln=strlen(a);
   for (i = 0; i < ln; i++)
		{
		    cnt[a[i] - 'a']++;
		}
	for (i = 0; i < 26; i++)
    {
		if (cnt[i] % 2 == 1)
			ck++;
    }

    if(ck==0 || ck%2==1)
        printf("First");
    else
        printf("Second");


}