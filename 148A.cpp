#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,l,m,n,a,b,c,d,e,f,i,total=0;
    cin >> k >> l >> m >> n >> d;
    if(k==1)
        cout << d << endl;
    else
    {
        for(i=1;i<=d;i++)
        {
            if(i%k==0)
        {
                total++;
        }

       }
       for(i=1;i<=d;i++)
       {
           if(i%k != 0)
                 if(i%l==0)
             {
                total++;
              }
        }

        for(i=1;i<=d;i++)
       {
           if(i%k != 0 && i%l !=0 )
                 if(i%m==0)
             {
                total++;
              }
        }

        for(i=1;i<=d;i++)
       {
           if(i%k != 0 && i%l !=0 && i%m !=0)
                 if(i%n==0)
             {
                total++;
              }
        }
        cout << total << endl;
}

}