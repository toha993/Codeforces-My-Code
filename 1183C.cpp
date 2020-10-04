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
#define int long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		if(d*b>=a)
		{
			cout << -1 << endl;
			continue;
		}
		if(c*b<a)
		{
			cout << b << endl;
			continue;
		}
		else
		{
			int l=0,h=b;
			int mid,bal;
			while(l<=h)
			{
				mid=(l+h)/2;
				int gg=c*(mid)+d*(b-mid);
				if(gg<a)
				{
					bal=mid;
					l=mid+1;
				}
				else
				{
					h=mid-1;
				}
			}
			cout << bal << endl;
		}

	}
}