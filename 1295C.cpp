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
		string s,p;
		cin >> s >> p;
		vector<int>v[1000];
		map<char,int>mp;
		for (int i = 0; i < s.length(); ++i)
		{
			mp[s[i]]=1;
			v[s[i]-48].push_back(i+1);
		}
		int flag=0;
		int start=0,ck=1;
		for (int i = 0; i < p.length(); ++i)
		{
			int paisi=0;
			if(mp[p[i]]==0)
			{
				flag=1;
				break;
			}
			else
			{
				int x=upper_bound(v[p[i]-48].begin(),v[p[i]-48].end(),start)-v[p[i]-48].begin();
				//cout << x<< " ";
				if(x<v[p[i]-48].size())
				{
					start=v[p[i]-48][x];
					paisi=1;
				}
				if(paisi)
				{
					
				}
				else
				{
					ck++;
					start=v[p[i]-48][0];
				}
			}
			//cout << ck << endl;
		}
		if(flag)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << ck << endl;
		}
	}
}