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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n;
	cin >> n;
	stack<ll>st;
	ll ans=0,flag=0;
	// << (ll)pow(2,32) << endl;
	while(n--)
	{
		string s;
		cin >> s;
		if(s=="for")
		{
			ll m;
			cin >> m;
			if(!st.empty())
				{
					if(st.top()*m>=4294967296)
						st.push(4294967296);
					else
						st.push(st.top()*m);
				}
			else
				st.push(m);
		}
		else if(s=="add")
		{
			if(!st.empty())
			{
				if(st.top()<0)
				{
					ans = -5;
					break;
				}
				ans +=st.top();
			}
			else
				ans +=1;
		}
		else if(s=="end")
		{
			if(!st.empty())
				st.pop();
		}
		if(ans>=4294967296)
			break;
	}
	if(ans>=4294967296 || ans < 0)
	{
		cout << "OVERFLOW!!!" << endl;
	}
	else
		cout << ans << endl;
}