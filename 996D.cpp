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

int a[205];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < 2*n; ++i)
	{
		cin >> a[i];
	}
	int ck=0;
	for (int i = 0;i<2*n; i +=2)
	{
		if(a[i] != a[i+1])
		for (int j = i+1; j <2*n; ++j)
		{
				if(a[j]==a[i])
				{
					int k;
					k=j;
					//cout << k << endl;
					while(a[i+1]!=a[i])
					{
						swap(a[k-1],a[k]);
						k--;
						ck++;
					}
					break;
				}
		}
	}
	cout << ck << endl;
}