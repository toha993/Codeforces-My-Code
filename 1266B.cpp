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
	for (int i = 0; i < n; ++i)
	{
		long long x;
		cin >> x;
		if(x<15)
		{
			cout << "NO" << endl;
			continue;
		}
		if((x-1)%14==0|| (x-2)%14==0 ||(x-3)%14==0|| (x-4)%14==0||(x-5)%14==0|| (x-6)%14==0)
		{
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}