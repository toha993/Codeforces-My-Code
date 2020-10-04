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

char a[1005];
int g[1005];
int main()
{
	int n;
	cin >> n;
	//int ck=0,mx=0;
	for (int i =0; i <n-1 ; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i <n ; ++i)
	{
		int l,r;
		l=r=1;
		for (int j=i; j <n ; ++j)
		{
			if(a[j]=='R')
				break;
			else if(a[j]=='L')
				l++;
		}
		for (int j = i-1; j >=0 ; --j)
		{
			if(a[j]=='L')
				break;
			else if(a[j]=='R')
				r++;
		}
		//cout << l << " " << r << endl;
		cout << max(l,r) << endl;
	}
	cout << endl;
}