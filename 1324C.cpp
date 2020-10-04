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
		string s;
		cin >> s;
		vector<int>v;
		v.push_back(0);
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]=='R')
				v.push_back(i+1);
		}
		v.push_back(s.length()+1);	
		int mn=0;
		for (int i = 0; i < v.size()-1; ++i)
		{
			if(v[i+1]-v[i]>mn)
			{
				mn=v[i+1]-v[i];
			}
		}
		cout << mn << endl;
	}
}