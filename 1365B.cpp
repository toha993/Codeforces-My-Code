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
		vector<int>a(n),b(n),c(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			c[i]=a[i];
		}
		int cp=0,ck=0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			if(x==1)
				ck=1;
			else
				cp=1;
		}
		sort(c.begin(),c.end());
		if(a==c)
		{
			cout << "Yes" << endl;
		}
		else
		{
			if(cp&&ck)
			{
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
	}
}