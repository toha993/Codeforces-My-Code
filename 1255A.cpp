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
	int n;
	cin >> n;
	while(n--)
	{
		int x,y;
		cin >> x >> y;
		if(x==y)
		{
			cout << 0 << endl;
			continue;
		}
		else
		{
			int dif=0;
			if(x>y)
			{
				dif=x-y;
			}
			else
				dif=y-x;
				int ans=0;
				ans +=(dif/5);
				dif %=5;
				ans +=(dif/2);
				dif %=2;
				ans +=dif;
				cout << ans << endl;
		}
	}
}