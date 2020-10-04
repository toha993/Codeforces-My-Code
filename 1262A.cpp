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
		int p;
		cin >> p;
		int mn=0,mx=1e9+5,fixedmn=1e9+5,fixedmx=0;
		for (int i = 0; i < p; ++i)
		{
			int x,y;
			cin >> x >> y;
			mn=max(x,mn);
			mx=min(y,mx);
		}
		if(p==1)
			{
				cout << 0 << endl;
				continue;
			}
		//cout << mx << " " << mn << endl;
		cout << max(0,mn-mx) << endl;
	}
}