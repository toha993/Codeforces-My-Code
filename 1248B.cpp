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
	vector<int>v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	long long x=0,y=0;
	for (int i = 0; i < (v.size()+1)/2; ++i)
	{
		if(i != v.size()-1-i)
		{
			x +=v[v.size()-1-i];
			y +=v[i];
		}
		else
			x +=v[i];
	}
	//cout << x << " " << y << endl;
	cout << x*x*1ll+y*y*1ll << endl;
}