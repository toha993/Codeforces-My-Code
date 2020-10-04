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
	int ans[n];
	int mx=1;
	int p=1;
	for (int i = 1; i < n; ++i)
	{ 
		int xd,pd;
		cout << "? " << p << " " << i+1 << endl;
		cin >> xd;
		cout << "? " << i+1 << " " << p << endl;
		cin >> pd;

		if(xd>pd)
		{
			ans[p]=xd;
			p=i+1;
		}
		else
			ans[i+1]=pd;
	}
	ans[p]=n;
	cout << "! ";
	for (int i = 1; i <= n; ++i)
	{
		cout << ans[i] << " ";
	}
	cout << endl;
}