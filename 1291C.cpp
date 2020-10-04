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
//solve
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,k;
		cin >> n >> m >> k;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int samne=m-1;
		int pise=n-samne-1;
		int chck=min(k,samne);
		int ans=0;
		for (int i = 0; i <=chck; ++i)
		{
			int ttl=1e9+5;
			for (int j = 0; j<=samne-chck; ++j)
			{
				int xd=max(a[i+j],a[i+j+pise]);
				ttl=min(xd,ttl);
			}
			ans=max(ttl,ans);
		}
		cout << ans << endl;


	}
}