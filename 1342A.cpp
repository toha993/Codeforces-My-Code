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
		int x,y;
		cin >> x >> y;
		long long a,b;
		cin >> a >> b;
		long long ans=0;
		if(2*a<=b)
		{
			ans +=x*a;
			ans +=y*a;
			cout << ans << endl;
		}
		else
		{
			int xd=min(x,y);
			ans +=xd*b;
			x -=xd;
			y -=xd;
			ans +=x*a;
			ans +=y*a;
			cout << ans << endl;
		}
	}
}