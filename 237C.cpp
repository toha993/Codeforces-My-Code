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
//solven
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int sum[1000005],isprime[1000005]={0};
int mx=1000005;
int a,b,k;
void sieve()
{
	isprime[1]=1;
	isprime[2]=0;
	for (int i = 2; i*i <=mx ; i++)
	{
		if(!isprime[i])
		{
			for (int j = i*i; j < mx; j +=i)
			{
				isprime[j]=1;
			}
		}
	}
	sum[0]=0;
	for (int i = 1; i < mx; ++i)
	{
		if(isprime[i])
		{
			sum[i]=sum[i-1];
		}
		else
		{
			sum[i]=sum[i-1]+1;
		}
	}
}
bool chk(int n)
{
	for (int i =a; i <=b-n+1 ; ++i)
	{
		if(sum[i+n-1]-sum[i-1]<k)
			return 0;
	}
	return 1;
}
int  main()
{
	sieve();
	
	cin >> a >> b >> k;
	//cout << sum[b]-sum[a-1] << endl;
	if(sum[b]-sum[a-1]<k)
	{
		cout << -1 << endl;
		exit(0);
	}
	int l=1,h=b-a+1,ans;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(chk(mid))
		{
			ans=mid;
			h =mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	cout << ans << endl;

}