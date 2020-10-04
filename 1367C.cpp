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


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		char a[n];
		vector<int>v;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			if(a[i]=='1')
			{
				v.push_back(i);
			}
		}
		//cout << n << " " << m << endl;
		if(v.size()==0)
		{
			cout << max(((n+m)/(m+1)),1) << endl;
		}
		else
		{
			int ans=0;
			ans +=(v[0]/(m+1));
			for (int i = 1; i< v.size(); ++i)
			{
				if((v[i]-v[i-1]-1)>(2*m+1))
				{
					ans +=(v[i]-v[i-1]-1-(2*m+1))/(m+1)+1;
				}
				else
					ans +=(v[i]-v[i-1]-1)/(2*m+1);
			}
			ans +=((n-1-v[v.size()-1])/(m+1));
			cout << ans << endl;
		}
	}
}