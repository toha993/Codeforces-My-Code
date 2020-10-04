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
	map<int,int>mp;
	int ans=1;
	int mx=1;
	while(n--)
	{
		int a,b;
		cin >> a >> b;
		if(a==0)
			a=24;
		mp[a*100+b]++;
		if(mp[a*100+b]>mx)
		{
			ans=mp[a*100+b];
			mx=ans;
		}
	}
	cout << ans << endl;

}