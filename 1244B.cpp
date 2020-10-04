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
		int m;
		cin >> m;
		string s;
		cin >> s;
		int suru=0,second=0;
		int ssh=m+1,start=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]=='1' && !suru)
			{
				suru=1;
				start=i+1;
			}
			else if(s[i]=='1' && suru==1)
			{
				second=1;
				ssh=i+1;
			}
		}
		int mx=m;
		if(suru)
			{
				mx=max(mx,(m-start+1)*2);
				mx=max(mx,start*2);
			}
		if(second)
		{
			mx=max(mx,(ssh-start+1)*2);
			mx=max(mx,ssh*2);
		}
		cout << mx << endl;

	}
}