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
		int n,m,k;
		cin >> n >> m >> k;
		int strt=0;
		int left,right;
		for (int i = 0; i < k; ++i)
		{
			int x,y;
			cin >> x >> y;
			if(strt==0)
			{

				if(m>=x && m<=y)
				{
					left=x;
					right=y;
					strt=1;
				}
			}
			if(strt==1)
			{
				if(x<left && y>=left)
				{
					left=x;
					if(y>right)
						right=y;
				}
				else if(x<=right && y>right)
				{
					right=y;
				}
				else if(x<left && y>right)
				{
					left=x;
					right=y;
				}
			}
			//cout << left << " " << right << endl;
		}
		if(strt==1)
		{
			cout << right-left+1 << endl;
		}
		else
			cout << 1 << endl;
	}
}