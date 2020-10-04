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


int  main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		map<int,int>mp,md;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> b[i];
			mp[b[i]]++;
		}
		for (int i = 0; i < n; ++i)
		{
			if(mp[a[i]]==1)
			{
				md[a[i]]=i+1;
			}
		}
		long long ans=0,last=1,ck=0;
		for (int i = 0; i < m; ++i)
		{
			//cout << md[b[i]] << " " << last << " "; 
			if(last>md[b[i]])
			{
				ans++;
			}
			else
				ans +=(2*(md[b[i]]-ck-1)+1);
			ck++;
			last=max(last,md[b[i]]*1ll);
			//cout << ans << endl;
		}
		//cout << endl;
		cout  << ans << endl;
	}
}