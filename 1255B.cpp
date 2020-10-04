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
		long long ans=0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			ans +=x;
		}
		if(m<n || n==2)
		{
			cout << -1 << endl;
			continue;
		}
		cout << 2*ans*1ll << endl;
		for (int i = 1; i <n; ++i)
		{
			cout << i << " " << i+1 << endl;
		}
		cout << n << " " << 1 << endl;
	}
}