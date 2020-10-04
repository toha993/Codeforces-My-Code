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

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,n;
		cin >> a >> b >> n;
		int ck=0;
		while(a<=n && b<=n)
		{
			if(a<b)
			{
				a +=b;
			}
			else
				b +=a;
			ck++;
		}
		cout << ck << endl;
	}
}