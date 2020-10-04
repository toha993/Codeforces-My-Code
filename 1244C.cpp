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
main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	for (int i = 0; i < c; ++i)
	{
		if((b-(i*d))%c==0)
		{
			int w=(b-(i*d))/c;
			if(w+i<=a&& w>=0)
			{
				cout << w << " " << i << " " << a-w-i << endl;
				exit(0);
			}
		}
	}
	cout << -1 << endl;

}