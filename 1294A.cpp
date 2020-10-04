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
	cin >>t;
	while(t--)
	{
		int a[4],d;
		cin >> a[0] >> a[1] >> a[2] >> d;
		int sum=a[0]+a[1]+a[2];
		if((sum+d)%3)
		{
			cout << "NO" << endl;
		}
		else
		{
			sort(a,a+3);
			if((sum+d)/3 < a[2])
			{
				cout << "NO" << endl;
			}
			else
				cout << "YES" << endl;
		}
	}
}