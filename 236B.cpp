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
long long mod=1073741824;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
vector<int>prime;
const int mx=1000001;
bool isprime[mx];
void sieve()
{
	prime.push_back(2);
	for (int i = 3; i*i < mx; i +=2)
	{
		if(!isprime[i])
		{
			for (int j = i*i; j < mx; j +=i)
			{
				isprime[j]=1;
			}
		}
	}
	for (int i = 3; i < mx; i +=2)
	{
		if(!isprime[i])
		{
			prime.push_back(i);
		}
	}
}
int pathao(int n)
{
	if(n==1)
		return 1;
	long long ans=1;
	for (int i = 0,p=prime[i];p*p<=n; ++i,p=prime[i])
	{
		if(n%p==0)
		{
			int ck=0;
			while(n%p==0)
			{
				ck++,n /=p;
			}
			ans *=(ck+1);
		}
	}
	if(n!=1)
	{
		ans *=2;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	cin >> a >> b >> c;
	sieve();
	long long xd=0;
	for (int i = 1; i <= a; ++i)
	{
		for (int j = 1; j <= b; ++j)
		{
			for (int k = 1; k <= c; ++k)
			{
				 xd =(xd+pathao(i*j*k))%mod;
			}
		}
	}
	cout << xd << endl;
}