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
	map<int,int>mp,md;
	for (int k = 0; k < n; ++k)
	{
		string p,q;
		cin >> p >> q;
		int paini=0;
		int j=0;
		for (int i = 0; i < p.length();++i)
		{
			mp[p[i]-48]++;
			int ck=0;
			for (;j < q.length(); ++j)
			{
				md[q[j]-48]++;
				if(p[i]==q[j])
				{
					ck=1;
					j++;
					break;
				}
				else if(q[j]==q[j-1])
				{
					continue;
				}
				else
				{
					//cout << p[i] << " " << q[j] << endl;
 					paini=1;
					break;
				}
			}
			if(paini)
				break;
			if(ck==0)
			{
				paini=1;
				break;
			}
		}
		for (int i = j; i <q.length() ; ++i)
		{
			if(q[i]!=p[p.length()-1])
			{
				paini=1;
				break;
			}
		}
		if(paini)
		{
			cout << "NO" << endl;
			mp.clear();
			md.clear();
			continue;
		}
		for (auto i : md)
		{
			if(mp[i.first]>i.second)
			{
				//cout << i.first+48 << " " << mp[i.first] << " " << i.second << endl;
				paini=1;
				cout << "NO" << endl;
				break;
			}
		}
		if(!paini)
			cout << "YES" << endl;
		mp.clear();
		md.clear();
	}
}