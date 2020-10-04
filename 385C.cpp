#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
vector<int>prime;
const int mx=10000006;
int gg=0;
vector<long long>isprime(mx),ttl(mx),sum(mx);
int a[1000006];
void sieve()
{
    prime.push_back(2);
    //isprime[1]=1;
    isprime[2]=0;
    for (int i = 3; i*i <=mx; i +=2)
    {
        if(!isprime[i])
        {
            for (int j = i*i; j <=mx; j +=i)
            {
                isprime[j]=1;
            }
        }
    }
    for (int i = 3; i <=mx ; i +=2)
    {
        if(!isprime[i])
            prime.push_back(i);
    }
    // for(auto i : prime)
    // {
    //  cout << i << endl;
    // }
    // for (int i = 0;i<prime.size(); ++i)
    // {
    //  for (int j =2*prime[i]; j <=mx; j +=prime[i])
    //  {
    //      isprime[j]=1;
    //      sum[prime[i]] +=sum[j];
    //  }
    //  if(i!=0)
    //  ttl[prime[i]] =ttl[prime[i-1]]+sum[prime[i]];
    //  else
    //      ttl[prime[i]]=sum[prime[i]];
    // }
    // for (int i = 2; i <=gg; ++i)
    // {
    //  if(isprime[i])
    //      {
    //          ttl[i]=ttl[i-1];
    //      }
    // }
    for (int i = 0,p=prime[i]; i <prime.size() && p<=mx;++i,p=prime[i])
    {
        for (int j =p*2; j <=mx; j +=p)
        {
            sum[p] +=sum[j];
            isprime[j]=1;
        }
    }
    ttl[0]=ttl[1]=0;
    for (int i = 2;i <=mx; ++i)
    {
        if(!isprime[i])
        ttl[i]=ttl[i-1]+sum[i];
        else
            ttl[i]=ttl[i-1];
        //cout << i << " " << ttl[i] << endl;
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        //gg=max(gg,a[i]);
        sum[a[i]]++;
    }
    sieve();
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        int x,y;
        cin >> x >> y;
        x=min(x,mx);
        y=min(y,mx);
        cout << ttl[y]-ttl[x-1] << endl;
    }
    return 0;
}