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
		int n;
		cin >> n;
		int minx=-1e5,miny=-1e5,mxx=1e5,mxy=1e5;
		for (int i = 0; i < n; ++i)
		{
			int a,b,mnx,py,px,mny;
			cin >> a >> b >> mnx >> py >> px >> mny;
			if(mnx==0)
			{
				minx=max(a,minx);
			}
			if(mny==0)
			{
				miny=max(b,miny);
			}
			if(py==0)
			{
				mxy=min(b,mxy);
			}
			if(px==0)
			{
				mxx=min(a,mxx);
			}
		}
		if(minx>mxx || miny > mxy)
		{
			cout << 0 << endl;
			continue;
		}
		else
		{
			cout << 1 << " " << mxx << " " << mxy << endl;
		}
	}
}