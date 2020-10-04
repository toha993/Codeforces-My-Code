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
		string s;
		cin >> s;
		int ans=0;
		for (int i = 0; i < n; ++i)
		{
			int ck=0;
			if(s[i]=='A')
			{
				for (int j = i+1; j < n; ++j)
				{
					if(s[j]=='P')
						ck++;
					else
						break;
				}
			}
			ans=max(ans,ck);
		}
		cout << ans << endl;

	}

}