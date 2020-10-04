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
		string s,p;
		cin >> s >> p;
		string q=s,r=p;
		map<char,int>mp;
		vector<int>sv[1005],sp[1005];
		for (int i = 0; i < s.length(); ++i)
		{
			mp[s[i]]++;
			sv[s[i]-48].push_back(i+1);
		}
		for (int i = 0; i < p.length(); ++i)
		{
			mp[p[i]]++;
			sp[p[i]-48].push_back(i+1);
		}
		int flag=0;
		int ans[1005];
		for (auto x : mp)
		{
			if(x.second & 1)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		{
			cout << "No" << endl;
			continue;
		}
		vector<pair<int,int>>v;
		for (int i = 0; i < n; ++i)
		{
			for (int j =i+1; j < n; ++j)
			{

				if(s[j]==s[i])
				{
					swap(p[i],s[j]);
					v.push_back({j+1,i+1});
					break;
				}
				else if(p[j]==s[i])
				{
					swap(s[j],p[j]);
					v.push_back({j+1,j+1});
					swap(s[j],p[i]);
					v.push_back({j+1,i+1});
					break;
				}
			}
		}
		if(s!=p)
		{
			cout<< "No" << endl;
			continue;
		}
		else
		{
			cout << "Yes" << endl;
			cout << v.size() << endl;
			for (int i = 0; i <v.size() ; ++i)
			{
				cout<< v[i].first << " " << v[i].second << endl;
			}
		}
	}
}