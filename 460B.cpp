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
#define int long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int sum(int x)
{
	int ans=0;
	while(x!=0)
	{
		ans +=x%10;
		x /=10;
	}
	return ans;
}
main()
{
	int a,b,c;
	cin >> a >> b >> c;
	set<long long>st;
	for (int i = 1; i<=85; ++i)
	{
		int x;
		x=(int)pow(i,a);
		if(x*b+c>0 && x*b+c < 1e9)
			{
				int gg=sum(x*b+c);
				if(gg==i)
					st.insert(x*b+c);
			}
	}
	cout << st.size() << endl;
	if(st.size()==0)
	{
		//cout << 0 << endl;
		exit(0);
	}
	//sort(v.begin(),v.end());
	for (auto i : st)
	{
		cout << i << " ";
	}
	cout << endl;
}