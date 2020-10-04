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
	int a[n];
	vector<int>p,q;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		p.push_back(a[i]);
	}
	sort(p.begin(),p.end());
	string s;
	cin >> s;
	set<int>st;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='0')
		{
			q.push_back(a[i]);
		}
		else
		{
			while(s[i]=='1')
			{
				st.insert(a[i]);
				st.insert(a[i+1]);
				i++;
			}
			for(auto x : st)
			{
				q.push_back(x);
			}
			st.clear();
		}
	}
	if(s[s.length()-1]=='0')
	{
		q.push_back(a[n-1]);
	}
	// for (int i = 0; i < q.size(); ++i)
	// {
	// 	cout  << q[i] << endl;
	// }
	if(p != q)
	{
		cout << "NO" << endl;
	}
	else
		cout << "YES" << endl;

}