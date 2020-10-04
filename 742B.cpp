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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[100005];
int main()
{
	map<ll,ll>mp;
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	long long ans=0;
	sort(a,a+n);
	for (int i = 0; i < n; ++i)
	{
		ll x= a[i]^m;
		if(mp[x]!=0 && x !=a[i])
		{
			ans +=mp[x];
		//	cout << mp[x] << endl;
			mp[a[i]]--;
		}
		else if(x==a[i] && mp[x]!=0)
		{
			ans +=(mp[x]-1);
			mp[x]--;
		}
	}
	cout << ans << endl;
}