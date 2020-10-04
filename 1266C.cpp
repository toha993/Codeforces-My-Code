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
	int x,y;
	cin >> x >> y;
	if(x==1 && y==1)
	{
		cout << 0 << endl;
		exit(0);
	}
	if(y==1)
	{
		for (int i = 2; i <=x+1 ; ++i)
		{
			cout << i << endl;
		}
		return 0;
	}
	long long a[x][y];
	long long pk=y+1;
	for (int i = 0; i<x; ++i)
	{
		for (int j = 0; j<y ; ++j)
		{
			if(i==0)
				a[i][j]=(j+2);
			else 
				a[i][j]=pk*(j+2);
		}
		pk++;
	}
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}