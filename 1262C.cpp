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
		int n,k;
		cin >> n >> k;
		int fa=n/2;
		int la=fa;
		int xd=k;
		string s,p;
		cin >> s;
		vector<char>vt;
		for (int i = 0;p.length()<n;++i)
		{
			if(xd !=1)
			{
				p +="()";
				xd--;
				la--;
				fa--;
			}
			else
			{
				if(fa>0)
				{
					p +='(';
					fa--;
				}
				else
				{
					p +=')';
					la--;
				}
			}
		}
		for (int i = 0; i <s.size(); ++i)
		{
			vt.push_back(s[i]);
		}
		vector<pair<int,int>>v;
		for (int i = 0; i < n; ++i)
		{
			if(p[i]==vt[i])
				continue;
			int j;
			for (j = i+1; j < n; ++j)
			{
				if(vt[j]==p[i])
				{
					v.push_back({i+1,j+1});
					reverse(vt.begin()+i,vt.begin()+j+1);
					break;
				}
			}
		}
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); ++i)
		{
			cout << v[i].first << " " << v[i].second << endl;
		}
		// for (int i = 0; i < s.length(); ++i)
		// {
		// 	cout << vt[i];
		// }
		//cout << endl;
		//cout << p << endl;
		//cout << p << endl;
	}
}