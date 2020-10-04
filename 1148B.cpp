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

//solven
int main()
{
	ll a,b,t1,t2,k;
	cin >> a >> b >> t1 >> t2 >> k;
	ll suru[a+1],ssh[b+1],f[a+1],l[b+1];
	for (int i = 0; i < a; ++i)
	{
		cin>>suru[i];
		f[i]=suru[i]+t1;
	}
	for (int i = 0; i < b; ++i)
	{
		cin >> ssh[i];
		l[i]=ssh[i]+t2;
	}
	if(k>=a || k >=b )
	{
		cout << -1 << endl;
		return 0;
	}
	ll ans=-1;
	for (int i = 0; i <=k; ++i)
	{
		int x=lower_bound(ssh,ssh+b,f[i])-ssh;
		x +=(k-i);
		if(x==b)
		{
			cout << -1 << endl;
			return 0;
		}
		//cout << x << endl;
		ans=max(ans,l[x]);
	}
	cout  << ans << endl;

}