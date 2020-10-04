#include<bits/stdc++.h>
using namespace std;
#define inf 1e9+5
///10 4 5 2
int main()
{
    int t;
    float pp;
    cin >> t;
    while(t--)
    {
        int ttl,suru,hbe,vag,ans=inf;
        cin >> ttl >> suru >> hbe >> vag;
        if((hbe-suru)%vag==0)
            ans=abs((hbe-suru)/vag);
        if((hbe-1)%vag==0)
        {
            int cp,ck;
            if((suru-1)%vag==0)
                cp=(suru-1)/vag;
            else
                cp=((suru-1)/vag)+1;
            if((hbe-1)%vag==0)
                ck=(hbe-1)/vag;
            else
                ck=((hbe-1)/vag)+1;
            ans=min(ans,abs(cp+ck));

            //cout << ans << endl;
        }
        if((ttl-hbe)%vag==0)
        {
            int cp,ck;
            if((ttl-suru)%vag==0)
                cp=(ttl-suru)/vag;
            else
                cp=((ttl-suru)/vag)+1;
            if((ttl-hbe)%vag==0)
                ck=(ttl-hbe)/vag;
           else
                ck=((ttl-hbe)/vag)+1;

             ans=min(ans,abs(cp+ck));

        }
        if(ans==inf)
            cout << -1 << endl;
        else
            cout << ans << endl;




    }
}