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
	int n,m;
	cin >> n >> m;
	string s;
	cin >> s;
	int ck=0;
	vector<int>v;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='1')
			v.push_back(i+1);
	}
	// 
	int x=1;
	int step=0;
	while(x<n)
	{
		int cc=lower_bound(v.begin(),v.end(),x+m+1)-v.begin();
		if(x==v[cc-1])
		{
			cout << -1 << endl;
			exit(0);
		}
	//	cout << v[cc-1] << endl;
		x=v[cc-1];
		step++;
	}
	cout << step << endl;
}