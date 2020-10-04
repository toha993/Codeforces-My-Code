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
		int n,ck=0,cp=0;
		cin >> n;
		string s;
		cin >> s;
		vector<int>v;
		int l,r,flag=0;
		v.push_back(1);
		//nt vis[200005]={0},vid[200005]={0};
		//vis[0]=1;
		//vid[0]=1;
		int mx=1e9;
		map<int,map<int,int>>mp;
		mp[0][0]=1;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='L')
				ck++;
			else if(s[i]=='R')
				ck--;
			else if(s[i]=='U')
				cp++;
			else
				cp--;
			//cout << ck << " " << cp << endl;
			if(mp[ck][cp] && i+1-mp[ck][cp]<mx)
			{
				//cout << ck << " " << cp << endl;
				if(ck==0 && cp==0 && mp[ck][cp]==1)
					l=mp[ck][cp];
				else
				l=mp[ck][cp]+1;
				r=i+1;
				mx=i+1-mp[ck][cp];
				mp[ck][cp]=i+1;
				v.push_back(2);
			}
			else
			{
				mp[ck][cp]=i+1;
				
			}

			
		}
		for (int i = 0; i < n-1; ++i)
		{
			if(s[i]=='L' && s[i+1] == 'R')
			{
				flag=1;
				l=i+1;
				r=i+2;
			}
			else if(s[i+1]=='L' && s[i] == 'R')
			{
				flag=1;
				l=i+1;
				r=i+2;
				
			}
			else if(s[i]=='U' && s[i+1] == 'D')
			{
				flag=1;
				l=i+1;
				r=i+2;
			}
			else if(s[i]=='D' && s[i+1] == 'U')
			{
				flag=1;
				l=i+1;
				r=i+2;
			}
		}
		if(flag)
		{
			cout << l << " " << r << endl;
			continue;
		}
		if(v.size()==1)
		{
			cout << -1 << endl;
		}
		else
			cout << l << " " << r << endl;
		
	}
}