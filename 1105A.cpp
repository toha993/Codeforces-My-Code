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
	cin >>n;
	vector<int> v;
	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int mn=1e9+7,mid;
	for (int i = 1; i <=v[n-1]; ++i)
	{
		int ans=0;
		for (int j = 0; j <v.size(); ++j)
		{
			if(v[j]>i+1)
			{
				ans +=(v[j]-i-1);
			}
			else if(v[j]<i-1)
			{
				ans +=(i-1-v[j]);
			}
			//cout << ans << endl;
		}
		if(ans<mn)
		{
			mid=i;
			mn=ans;
		}
	}
	cout << mid << " " << mn << endl;


}