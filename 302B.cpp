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

int a[100005];
int main()
{
	int n,m;
	cin >> n >> m;
	std::vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin >> x >> y;
		if(i==0)
		v.push_back(x*y);
		else
			v.push_back(*(v.end()-1)+x*y);

	}
	for (int i = 0; i < m; ++i)
	{
		int g;
		cin >> g;
		int ans=lower_bound(v.begin(),v.end(),g)-v.begin();
		cout << ans+1 << endl;

	}
}