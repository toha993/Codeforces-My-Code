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
bool good(string p)
{
	int cf=0,cg=0;
	for (int i = 0; i < p.length();)
	{

		if(p[i]=='0')
		{
			cf++;
			while(p[i]=='0')
				i++;
		}
		else if(p[i]=='1')
		{
			cg++;
			while(p[i]=='1')
				i++;
		}

	}
	if(cf>1 || cg >1)
		return false;
	return true;
}

int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		string s;
		cin >> s;
		int n=s.length();
		int ans=1e9;;
		if(good(s))
		{
			cout << 0 << endl;
			continue;
		}

		for (int i = 1; i < n; ++i)
		{
			int cg=0,cn=0,cp=0,ck=0;
			for (int j = 0; j <= i-1; ++j)
			{
				if(s[j]=='0')
				{
					ck++;
				}
				else
					cp++;
			}
			for (int j = i+1; j < n; ++j)
			{
				if(s[j]=='0')
				{
					cg++;
				}
				else
					cn++;
			}

			ans=min(ans,min(cp+cg,ck+cn));
			ans=min(ans,min(cp+cn+1,ck+cn+1));
		}
		cout << ans << endl;
	}
}