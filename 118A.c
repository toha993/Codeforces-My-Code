#include <stdio.h>
#include <string.h>
int main()
{
    char s[105];
    int i,ln;
    scanf("%s",s);
    ln=strlen(s);
    for(i=0;i<ln;i++)
    {
        s[i]=tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' )
        {
            printf("%c%c",'.',s[i]);
        }
    }
}