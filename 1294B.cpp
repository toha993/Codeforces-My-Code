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
		vector<pair<int,int>>v;
		for (int i = 0; i <n; ++i)
		{
			int x,y;
			cin >> x >> y;
			v.push_back({x,y});
		}
		sort(v.begin(),v.end());
		string s;
		int flag=0;
		int startx=0,starty=0;
		for (int i = 0; i < v.size(); ++i)
		{
			if(v[i].first<startx || v[i].second <starty)
			{
				flag=1;
				break;
			}
			int difx=v[i].first-startx;
			while(difx)
			{
				s +='R';
				difx--;
			}
			int dify=v[i].second-starty;
			while(dify)
			{
				s +='U';
				dify--;
			}
			startx=v[i].first;
			starty=v[i].second;
		}
		if(flag)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
			cout << s << endl;
		}

	}
}