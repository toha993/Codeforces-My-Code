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
		int n,p;
		cin >> n >> p;
		int mx=-1e9+5;
		int x[n+5],y[n+5];
		int mxd=0;
		for (int i = 0; i < n; ++i)
		{
			//int x,y;
			cin >> x[i] >> y[i];
			mx=max(mx,x[i]-y[i]);
			mxd=max(mxd,x[i]);

		}
		if(mx<=0)
			{
				if(mxd<p)
					cout << -1 << endl;
				else
					cout << 1 << endl;
			}
		else
		{
			int ck=1;
			p -=mxd;
			if(p<=0){

				cout << 1 << endl;
				continue;
			}
			ck +=(p+(mx)-1)/mx;
			cout << ck << endl;

		}
	}
}