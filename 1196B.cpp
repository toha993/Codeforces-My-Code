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
		int x,k;
		cin >> x >> k;
		int a[x+5];
		vector<int>v;
		int ck=0;
		for (int i = 1; i <=x; i++)
		{
			cin >> a[i];
			if(a[i]&1)
			{
				ck++;
				v.push_back(i);
			}
		}
		if(ck<k || ck%2 != k%2)
		{
			cout << "NO" << endl;
			continue;
		}
		else
		{
			cout << "YES" << endl;
			for (int i = 0; i < v.size(); ++i)
			{
				if(k>1)
				{
					cout << v[i] << " ";
					k--;
				}
			}
			cout << x << endl;

		} 
	}
}