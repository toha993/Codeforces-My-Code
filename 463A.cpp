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
	int n,s;
	cin >> n >> s;
	int mn=0,cp=0;
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin >> x >> y;
		if(x<s)
		{
			cp=1;
			if(y !=0)
			mn=max(mn,100-y);
		}
		else if(x==s && y==0)
			cp=1;
	}
	if(cp)
		cout << mn << endl;
	else
		cout << -1 << endl;
}