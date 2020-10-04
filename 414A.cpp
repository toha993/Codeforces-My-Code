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
	int a,b;
	cin >> a >> b;
	if((a/2) > b)
		cout << -1 << endl,exit(0);
	map<int,int>mp;
	if((a==1 && b>0)||(a>1 && b==0))
	{
		cout << -1 << endl,exit(0);
	}
	vector<int>v;
	int xtra=b-((a-2)/2);
	int ans=a;
	//cout << xtra << endl;
	for (int i=xtra;i>=2; --i)
	{
		if(i>xtra)
			continue;
		else
			{
				v.push_back(2*i);
				v.push_back(i);
				mp[i]=mp[2*i]=1;
				xtra -=i;
				ans -=2;
			}
		if(xtra==0)
			break;
	}
	for (int i = 1; i <=1e9; ++i)
	{
		if(ans==0 || ans==1)
			break;
		if(mp[i]==0 && mp[i+1]==0)
		{
			//cout << i << endl;
			v.push_back(i+1);
			v.push_back(i);
			mp[i+1]=mp[i]=1;
			ans -=2;
		}
	}
	if(a&1)
	{
		v.push_back(1e9-1);
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}