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
int mx=100005;
vector<int>prime;
bool isprime[100005];
map<int,int>mp;
void sieve()
{
	mp[2]=1;
	for (int i = 3; i <= sqrt(mx);  i +=2)
	{
		if(isprime[i]==0)
		{
			for (int j = i*i; j < mx; j +=i)
			{
				isprime[j]=1;
			}
		}
	}
	int ck=2;
	for (int i = 3; i < mx; i +=2)
	{
		if(!isprime[i])
		{
			mp[i]=ck++;
		}
	}


}

int main()
{
	sieve();
	int n;
	cin >> n;
	for (int i = 2; i <= n; ++i)
	{
		if(mp[i]!=0)
		{
			for (int j = i*2; j <=n ; j +=i)
			{
				mp[j]=mp[i];
			}
		}
		
	}
	for (int i = 2; i <=n; ++i)
	{
		if(i!=n)
		{
			cout << mp[i] << " ";
		}
		else
			cout << mp[i] << endl;
	}
}